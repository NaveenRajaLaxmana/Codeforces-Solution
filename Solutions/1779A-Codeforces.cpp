#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int l=0,r=0,ind=-1;
    bool ok=false;
    vector<int>ar(n,0);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='L')
        {
            l++;
            if(r>0)ok=true;
            if(r==0)ind=i+1;
        }else{
            r++;
        }
    }
    if(l>0 && r>0 && ok){
        cout<<0<<endl;
    }else if(l>0 && r>0 && !ok){
        cout<<ind<<endl;
    }else if(l==0 || r==0){
        cout<<-1<<endl;
    }
    
}
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
 
    return 0;
}