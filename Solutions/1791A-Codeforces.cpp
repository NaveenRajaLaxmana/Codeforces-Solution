#include<bits/stdc++.h>
using namespace std;

void solve(){
    char c;
    string str="codeforces";
    unordered_set<char>set;
    cin>>c;
    for(auto it:str){
        set.insert(it);
    }
    if(set.count(c)){
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