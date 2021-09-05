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
        ll n,m,q,i,t2,chk=0,ct=0,k,s,sm=0,dif=0,e=0;
        char t1;
        cin>>n>>k;
        vector<pair<char,int>> v;
        vector<int> vi;
        int ar[n];
        set<int> st;
        for(i=0;i<n;i++)
        {
            cin>>ar[i]; 
        }
        sort(ar,ar+n);
        e=0;
        while(ct!=k)
        {
            if(ar[e]<0)
                ar[e]=-1*ar[e];
            ct++;
            e++;
        }
        for(i=0;i<n;i++)
        {
            if(ar[i]>0)
            {
                sm+=ar[i];
            }
        }
        cout<<sm<<"\n";
    }
	return 0;
}