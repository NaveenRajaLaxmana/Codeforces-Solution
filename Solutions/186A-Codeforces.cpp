#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s,t;
    int p1=-1,p2=-1;
    cin>>s>>t;
    if(s.size()!=t.size()){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=t[i])
        {
            if(p1==-1){
                p1=i;
            }else{
                p2=i;
            }
        }
    }
    if(p1!=-1 && p2!=-1)
    {
        swap(s[p1],s[p2]);
    }
    
    if(s==t)
    {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}