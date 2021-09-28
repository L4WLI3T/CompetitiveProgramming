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
        ll n,p,x,y,i,ct=0;
        cin>>n>>p>>x>>y;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<p;i++)
        {
            if(a[i]==0)
            {
                ct+=x;
            }
            else if(a[i]==1)
            {
                ct+=y;
            }
        }
        cout<<ct<<"\n";
        
    }
	return 0;
}