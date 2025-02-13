# include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int x1, x2; int cnt_pathan = 0; int cnt_tiger = 0;

    while (n--){
        cin>>x1>>x2;

        if (x1 > x2) cnt_tiger++;
        else if (x1 < x2) cnt_pathan++;
        
    }
    if (cnt_tiger > cnt_pathan) cout<<"Tiger";
    else if (cnt_tiger < cnt_pathan) cout<<"Pathan";
    else if (cnt_tiger == cnt_pathan) cout<<"Draw";

    return 0;
}