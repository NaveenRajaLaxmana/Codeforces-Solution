#include<bits/stdc++.h>
using namespace std;

string pie = "314159265358979323846264338327";

void solve(){
    string s;
    cin>>s;
    int n=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==pie[i])n++;
        else break;
    }
    cout<<n<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}