#include <iostream>
using namespace std;
// converting (number)10 = (binary)2
int decToBin(int decNum){
    int ans = 0; int pow = 1;
    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
    
}
int main(){
    int decNum = 37;
    cout << "binary = " << decToBin(decNum) << endl;
    return 0;
}