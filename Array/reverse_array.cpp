#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n], b[n]; // Declaring an array
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Forward Order: ";
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nBackward Order: ";
    int j = 0;
    for (int i = n-1; i>=0; i--){
        b[j] = arr[i];
        cout<<b[j]<<" ";
        j++;
    }

    return 0;
}