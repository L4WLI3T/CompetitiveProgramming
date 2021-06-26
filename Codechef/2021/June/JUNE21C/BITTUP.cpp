#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#define md 1000000007
#define ll long long

long long int fp(long long x, unsigned int y)
{
    ll r=1;    
    x=x%md;
    if (x==0) 
        return 0;
    while (y>0)
    {
        if (y&1)
            r=(r*x)%md;
        y=y>>1;
        x=(x*x)%md;
    }
    return r;
}
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        cout<<fp((fp(2,n)-1),m)<<"\n";
    }
	return 0;
}
