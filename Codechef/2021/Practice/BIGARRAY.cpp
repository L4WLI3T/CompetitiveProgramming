#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while(t--)
    {
        ll n,s,i,flg=0,sm=0;
        cin>>n>>s;
        /*for(i=1;i<=n;i++)
        {
            if(flg==1)
            {
                break;
            }
            if((i-1)*(i)/2+(n-i+1)/2*(2*i+(n-i+1))==s)
            {
                cout<<i<<"\n";
                flg=1;
            }
        }
        if(flg==0)
            cout<<"-1"<<"\n";*/
        sm=n*(n+1)/2;
        if(sm-s>=1 && sm-s<=n)
        {
            cout<<sm-s<<"\n";
        }
        else
        {
            cout<<"-1"<<"\n";
        }
    }
	return 0;
}
