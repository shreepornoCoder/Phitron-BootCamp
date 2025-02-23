#include <iostream>
#include <string>
using namespace std;

int main(){
    string s; cin>>s;

    int cnt_vowels = 0;

    for (int i = 0; i<s.size(); i++){
        if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u')){
            cnt_vowels++;
        }
    }
    cout<<cnt_vowels;
}