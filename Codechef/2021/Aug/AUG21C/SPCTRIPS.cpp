#include <iostream>
using namespace std;
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
        ll n,i,k,j,ct=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            for(j=2*i;j<=n;j+=i)
            {
                ct+=1+(n-i)/j;
            }
        }
        cout<<ct<<"\n";
    }
	return 0;
}