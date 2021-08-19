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
        ll n=6,s1=0,s2=0,ele;
        int a[6];
        for(int i=0;i<n;i++)
        {
            cin>>ele;
            if(i<=2)
                s1+=ele;
            else
                s2+=ele;
        }
        cout<<(s1<s2?"2":"1")<<"\n";
    }
	return 0;
}