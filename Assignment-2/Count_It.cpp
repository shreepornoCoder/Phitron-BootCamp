#include <iostream>
#include <string>

using namespace std;

int main(){
    string s; getline(cin, s);

    int cnt_capital = 0;
    int cnt_small = 0;
    int cnt_space = 0;

    for (int i = 0; i<s.size(); i++){
        if ((int(s[i]) >= int('A')) && (int(s[i]) <= int('Z'))){
            cnt_capital++;
        }
        else if((int(s[i]) >= int('a')) && (int(s[i]) <= int('z'))){
            cnt_small++;
        }
        else cnt_space++;
    }
    cout<<"Capital - "<<cnt_capital<<"\n"<<"Small - "<<cnt_small<<"\n"<<"Spaces - "<<cnt_space;

    return 0;
}