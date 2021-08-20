#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define ll long long
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;  cin>>t;
    while(t--)
    {
        ll n,a;
        cin>>n>>a;
        if(n<=3)
        {
            cout<<a<<"\n";
        }
        else
        {
            cout<<int(sqrt(n))*a<<"\n";
        }
    }
	return 0;
}