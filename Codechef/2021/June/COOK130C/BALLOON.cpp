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
        ll n,i,x,pos,count=0;
        cin>>n;
        vector<int> v;
        for(i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        for(i=0;i<n;i++)
        {
            if(v[i]==1 || v[i]==2 || v[i]==3 || v[i]==4 || v[i]==5 || v[i]==6 ||v[i]==7)
            {
                count++;
            }
            if(count==7)
            {
                break;
            }
            pos=i;
        }
        cout<<i+1<<"\n";
    }
	return 0;
}
