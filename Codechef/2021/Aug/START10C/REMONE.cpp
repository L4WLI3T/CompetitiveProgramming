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
        ll n,m,q,i,j,t2,chk=0,ct=0,k,s,sm=0,dif=0,e=0,s1=0,s2=0;
        char t1;
        cin>>n;
        vector<pair<char,int>> v;
        vector<int> va,vb;
        int a[n],b[n-1],c[n-1];
        set<int> st;
        unordered_map<int, int> ump;
        unordered_map<int, int>::iterator itr;
        for(i=0;i<n;i++)
        {
            cin>>a[i]; 
        }
        for(i=0;i<n-1;i++)
        {
            cin>>b[i]; 
        }
        sort(a,a+n);
        sort(b,b+n-1);
        for(i=0;i<n-1;i++)
        {
            s1=b[i]-a[i];
            s2=b[i]-a[i+1];
            if(s1>0)
            {
                ump[s1]+=1;
            }
            if(s2>0 && s1!=s2)
            {
                ump[s2]+=1;
            }
        }
        for(itr=ump.begin();itr!=ump.end();++itr)
        {
            if(itr->second==n-1)
            {
                cout<<itr->first<<"\n";
                break;
            }
        }
    }
	return 0;
}