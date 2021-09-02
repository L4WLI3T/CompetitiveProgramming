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
        ll n,m,q,i,t2,chk=0,ct=0,a,b,c;
        char t1;
        cin>>a>>b>>c;
        vector<pair<char,int>> v;
        set<int> s;
        if(a<b && a<c)
        {
            cout<<"Draw"<<"\n";
        }
        else if(b<c)
        {
            cout<<"Bob"<<"\n";
        }
        else
        {
            cout<<"Alice"<<"\n";
        }
    }
	return 0;
}