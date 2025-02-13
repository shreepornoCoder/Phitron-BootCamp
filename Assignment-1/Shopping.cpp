# include <iostream>
using namespace std;

int main(){
    int n; cin>>n;

    if (n <= 1000) cout<<"Bad luck!"<<"\n";
    else if (n > 1000){
        cout<<"I will buy Punjabi\n";
        n-=1000;

        if (n >= 500){
           cout<<"I will buy new shoes\n";
           cout<<"Alisa will buy new shoes"; 
        }
    }

    return 0;
}