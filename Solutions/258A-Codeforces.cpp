#include<bits/stdc++.h>
using namespace std;

//258A Little Elephant and Bits

void solve(string);

int main(){
    string n;
    cin>>n;
    solve(n);
    return 0;
}

void solve(string s){
    int o=0;
    bool ok=false;
    for(long long int i=0;i<s.size();i++){
        if(s[i]=='1'){
            o++;
        }
        if(o>0 && s[i]=='0'){
            s.erase(s.begin()+i);
            ok=true;
            break;
        }
    }
    if(!ok){
        s.erase(s.begin()+s.size()-1);
        ok=true;
    }
    cout<<s<<endl;
}