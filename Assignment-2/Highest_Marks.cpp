#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int marks[n];

    int max_num = INT_MIN;  

    for (int i = 0; i<n; i++){
        cin>>marks[i];

        if (marks[i] > max_num) max_num = marks[i];
    }

    for (int i = 0; i<n; i++){
        cout<<(marks[i]-max_num)*-1<<" "; 
    }


    return 0;
}