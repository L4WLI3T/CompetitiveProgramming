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
        ll n,i,j,ct=0,sm=0;
        //float ele;
        ll ele;
        cin>>n;
        //vector<float> v;
        vector<int> v;
        for(i=0;i<n;i++)
        {
            cin>>ele;
            v.push_back(ele);
        }
        unordered_map<int, int> ump;
        unordered_map<int, int>::iterator itr;
        /*for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i!=j && (((v[i]+v[j])/v[i])<(v[i]+v[j])/v[j]))
                    ct+=1;
            }
        }*/
        /*for (auto x : ump)
            cout << x.first << " " << x.second << "\n";*/
        for (int const &i: v) 
        {
            ump[i]++;
        }
        /*for(itr=ump.begin();itr!=ump.end();++itr)
        {
            cout<<itr->first<<" "<<itr->second<<"\n";
        }*/
        for(itr=ump.begin();itr!=ump.end();++itr)
        {
            sm+=itr->second*(n-itr->second);
        }
        cout<<sm<<"\n";
        //cout<<ct*2<<"\n";
        
    }
	return 0;
}