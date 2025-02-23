#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];

    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);

    if (n % 2 != 0){
        // odd
        int middle = ((n+1)/2)-1;
        cout<<arr[middle];
    }
    else{
        int middle = (n/2)-1;
        cout<<arr[middle]<<" "<<arr[middle+1];   
    }

    return 0;
}