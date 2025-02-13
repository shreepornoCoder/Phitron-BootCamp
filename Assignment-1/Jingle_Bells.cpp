# include <iostream>
using namespace std;

int main(){
    int n; cin>>n; 
    int star_line = 6 + (n/2);
    int j = (5+(n/2));
    for (int i = 1; i<=star_line; i++){
        for (int s = j; s>0; s--){
            cout<<" ";
        }
        for (int star = 1; star<=(i*2)-1; star++){
            cout<<"*";
        }
        cout<<"\n";
        j--;
    }
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            cout<<' ';
        }
        for (int j = 0; j<n; j++){
            cout<<'*';
        }
        cout<<"\n";
    }

    return 0;
}