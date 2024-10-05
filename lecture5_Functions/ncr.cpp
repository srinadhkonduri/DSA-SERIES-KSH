#include <iostream>
using namespace std;
int fact(int n ){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}

int ncr(int n, int r){
    int fact_n = fact(n);
    int fact_r = fact(n);
    int nmr = fact(fact_n-fact_r);
}
int main(){
    int n = 8; int r = 6;
    int ans = ncr(n,r);
    cout << "ncr = " << ans << endl;
    return 0;
}