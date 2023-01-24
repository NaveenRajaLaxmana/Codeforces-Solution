#include<bits/stdc++.h>
using namespace std;
//296A Yaroslav and Permutations
int main(){
    int n,x;
    cin>>n;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
    }
    bool ok=true;
    for(auto it:mp){
        if(it.second>(n+1)/2){
            ok=false;
            break;
        }
    }
    if(ok){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}