#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int x=0,y=0;
    bool ans=false;
    for(int i=0;i<n;i++){
        if(s[i]=='U'){
            y++;
        }else if(s[i]=='R'){
            x++;
        }else if(s[i]=='D'){
            y--;
        }else if(s[i]=='L'){
            x--;
        }

        if(x==1 && y==1){
            ans=true;
            break;
        }
    }
    if(ans){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}