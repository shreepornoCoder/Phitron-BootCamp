#include <iostream>
#include <algorithm>
using namespace std;

void odd_even(){
    int n; cin>>n;
    int arr[n];

    int cnt_even = 0;

    for (int i = 0; i<n; i++){
        cin>>arr[i];
        if (arr[i] % 2 == 0) cnt_even++;
    }
    cout<<cnt_even<<" "<<(n-cnt_even);
}

int main(){
    odd_even();

    return 0;
}