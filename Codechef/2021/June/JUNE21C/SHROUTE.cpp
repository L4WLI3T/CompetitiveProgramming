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
        ll n,m,x,i,j,co=-1,ct=-1;
        cin>>n>>m;
        vector<ll> a,b;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<m;i++)
        {
            cin>>x;
            b.push_back(x);
        }
        vector<ll> c(n,-5),o(n,-5),t(n,-5);
        for(i=0;i<n;i++)
        {
            if(a[i]==1 || a[i]==2 || i==0)
            {
                o[i]=0;
                t[i]=0;
            }
        }
        for(i=0;i<n;i++) 
        {
            if(a[i]==1)
                co=i;
            if(o[i]==-5 && co!=-1)
            {
                o[i]=i-co;
            }
            else
            {
                o[i]=-1;
            }
        }
        for(i=n-1;i>=0;i--)
        {
            if(a[i]==2) 
                ct=i;
            if(t[i]==-5 && ct!=-1) 
            {
                t[i] =ct-i;
            }
            else
            {
                t[i]==-1;
            }
        }
        
        for(i=0;i<n;i++)
        {
            if(o[i]<=-1 && t[i]<=-1)
                c[i]=-1;
            else if(o[i]<=-1)
                c[i]=t[i];
            else if(t[i]<=-1)
                c[i]=o[i];
            else
                c[i]=min(o[i],t[i]);
        }
        for(i=0;i<m;i++)
        {
            //x=b[i];
            cout<<c[b[i]-1]<<" ";
        }
        cout<<"\n";
        //cout<<"\n";
    }
	return 0;
}

