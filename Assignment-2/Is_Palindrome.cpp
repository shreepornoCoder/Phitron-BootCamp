#include <iostream>
#include <string>
using namespace std;

int is_palindrome(string s){
    string new_s; int j=0;

    for (int i = s.size()-1; i>=0; i--){
        new_s.push_back(s[i]);
        j++;
    }

    if (new_s == s) return 1;
    else return 0;
}

int main(){
    string s; cin>>s;

    int res = is_palindrome(s);

    if (res == 1) printf("Palindrome");
    else printf("Not Palindrome");

    return 0;
}