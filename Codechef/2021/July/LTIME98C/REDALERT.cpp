#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define ll long long
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while(t--)
    {
        ll n,d,h,i,x,sm=0,flg=0;
        vector<int> a;
        cin>>n>>d>>h;
        for(i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                sm+=a[i];
            }
            else
            {
                if(sm<d)
                    sm=0;
                else
                    sm-=d;
            }
            if(sm>h)
            {
                cout<<"YES"<<"\n";
                break;
            }
        }
        if(sm<=h)
            cout<<"NO"<<"\n";

    }
	return 0;
}