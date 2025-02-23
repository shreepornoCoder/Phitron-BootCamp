#include <iostream>
using namespace std;

int count_before_one(int arr[], int size){
    int cnt = 0;
    
    for (int i = 0; i<size; i++){
        if (arr[i] == 1){
            break;
        }
        else{
            // cout<<arr[i]<<" ";
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int n; cin>>n;
    int arr[n];

    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int cnt = count_before_one(arr, n);
    printf("%d", cnt);

    return 0;
}