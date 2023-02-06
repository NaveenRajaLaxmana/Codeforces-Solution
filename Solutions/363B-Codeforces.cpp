#include<bits/stdc++.h>
using namespace std;

void solve();

int main(){
    solve();
    return 0;
}

void solve(){
    long long n,k,x,res=INT_MAX,sum=0,len=0,ans=0;
    cin>>n>>k;
    int ar[n]={};
    for(long long i=0;i<n;i++){
        cin>>x;
        ar[i]=x;
    }
    for(long long i=0;i<n;i++){
        if(len<k){
            sum+=ar[i];
            len++;
            if(res>sum && len==k){
                res=sum;
                ans=i+1;
            }
        }else{
            sum-=ar[i-k];
            sum+=ar[i];
            if(res>sum){
                res=sum;
                ans=i+1;
            }
        }
    }
    if(n==1){
        cout<<1<<endl;
    }else{
        cout<<ans<<endl;
    }
}