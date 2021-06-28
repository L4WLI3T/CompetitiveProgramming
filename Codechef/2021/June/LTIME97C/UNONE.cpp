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
        ll a,x,i;
        cin>>a;
        vector<int> v;
        for(i=0;i<a;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        for(i=0;i<a;i++)
        {
            if(v[i]%2==0)
                cout<<v[i]<<" ";
        }
        for(i=0;i<a;i++)
        {
            if(v[i]%2!=0)
                cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
	return 0;
}

