#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n]; // Declaring an array

    // step-1
    for (int i = n-1; i>=0; i--){
        cin>>arr[i];
    }

    // step-2
    // for (int i = 0; i<n; i++){
    //     cin>>arr[i];
    // }
    // int j = 0;
    // for (int i = n-1; i>=0; i--){
    //     arr[j] = arr[j];
    //     cout<<arr[j];
    //     j++;
    // }

    cout<<"Backward Order: ";
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}