#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,x,a=0,b=0;
    unordered_map<int,int>mp;
    cin>>n;
    while(n--){
       cin>>x;
       mp[x]++;
    }
    while(mp.size()>0)
    {
        if(mp.count(200)){
            if(a<=b){
                a+=200;
            }else{
                b+=200;
            }
            mp[200]--;
            if(mp[200]==0)mp.erase(200);
        }else if(mp.count(100)){
            if(a<=b){
                a+=100;
            }else{
                b+=100;
            }
            mp[100]--;
            if(mp[100]==0)mp.erase(100);
        }
    }
    if(a==b)
    {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}