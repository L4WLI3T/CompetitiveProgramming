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
        ll p,a,b,c,x,y,ct=0,rem=0,m;
        cin>>p>>a>>b>>c>>x>>y;
        if(x*a+b>y*a+c)
        {
            ct+=p/((y*a)+c);
            rem=p-ct*((y*a)+c);
            if(rem>=(x*a+b))
            {
                ct+=rem/((x*a)+b);
            }
            //cout<<p/((x*a)+b)<<"\n";    
        }
        else
        {
            ct+=p/((x*a)+b);
            rem=p-ct*((x*a)+b);
            if(rem>=(y*a+c))
            {
                ct+=rem/((y*a)+c);
            }
            //cout<<p/((y*a)+c)<<"\n";
        }
        cout<<ct<<"\n";
    }
	return 0;
}