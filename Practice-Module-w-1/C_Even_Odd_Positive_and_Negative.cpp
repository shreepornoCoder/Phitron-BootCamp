#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];

    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int pos = 0; int neg = 0; int even = 0; int odd = 0;

    for (int i = 0; i<n; i++){
        if (arr[i] > 0){
            pos++;
        }
        else{
            if (arr[i] < 0) neg++;
        }

        if (arr[i] % 2 == 0){
            even++;
        }else odd++;
    }
    cout<<"Even: "<<even<<"\n";
    cout<<"Odd: "<<odd<<"\n";
    cout<<"Positive: "<<pos<<"\n";
    cout<<"Negative: "<<neg<<"\n";

    return 0;
}