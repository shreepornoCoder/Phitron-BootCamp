#include <iostream>
#include <string>
using namespace std;

int main(){
    string s; cin>>s;

    int cnt_of_capital = 0;
    int cnt_of_small = 0;

    for (int i = 0; i<s.size(); i++){
        if ((int(s[i]) >= int('A')) && (int(s[i]) <= int('Z'))){
            cnt_of_capital++;
        }
        else cnt_of_small++;
    }

    cout<<cnt_of_capital<<" "<<cnt_of_small;

    return 0;
}