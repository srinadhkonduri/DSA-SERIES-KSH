#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// creating a custom comparator for sorting elements in pair
bool comparator(pair<int,int> p1 , pair<int,int> p2){
        if(p1.second < p2.second) return true;
        else return false;
    }

int main(){
    int arr[] = {12,45,67,32,90,19};
    int n = sizeof(arr) / sizeof(arr[0]); // calculate the size of array

    cout << "before sorting : ";
    for(int i = 0; i <n; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;

    sort(arr,arr+n); // ascending order

    cout << endl;

    cout << "after sorting ascending order : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;

    sort(arr,arr+n,greater<int>()); // descending order
    cout << "after sorting in descending order : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
    cout << endl;


    // creating a custom comparator to sort the pair elements
    vector<pair<int,int>> vec = {{3,1},{2,4},{2,6},{4,2},{5,2}};
    sort(vec.begin(),vec.end(),comparator);
    // here auto is very important it automatically converts te value type
    for(auto p : vec){
        cout << p.first << " " << p.second << endl;
    }

    cout << endl;

    cout << "max ele : "<< max(4,5) << " " << "min ele : " <<  min(2,3) << endl;
    return 0;
}