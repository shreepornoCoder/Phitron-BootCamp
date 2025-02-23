#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int marks[n];

    int cnt_even = 0;  

    for (int i = 0; i<n; i++){
        cin>>marks[i];

        if (marks[i] % 2 != 0) cnt_even++;
    }

    cout<<n-cnt_even<<" "<<cnt_even;

    return 0;
}