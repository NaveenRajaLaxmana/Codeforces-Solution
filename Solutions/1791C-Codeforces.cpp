#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int ans=n;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            ans-=2;
        }else{
            break;
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}