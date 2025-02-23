#include <iostream>
using namespace std;

int main(){
	string s;cin>>s; //all lowercase
	int size= s.size();
	int count;
	
	for(int i=0; i<size; i++){
		count=0;
		for(int j=0; j<size; j++){
			if(s[i]==s[j]){
				count++;
			}
		}
		cout << s[i] << " - " << count<< "\n"; 
	}
return 0;	
}