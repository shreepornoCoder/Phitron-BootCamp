# include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];

    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int total_even = 0; int total_odd = 0;

    for (int i = 0; i<n; i++){
        if (arr[i] % 2 == 0) total_even += arr[i];
        else total_odd += arr[i];
    }
    cout<<total_even<<" "<<total_odd;

    return 0;
}