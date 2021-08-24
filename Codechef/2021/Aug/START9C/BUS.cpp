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
        ll n,m,q,i,t2,chk=0,ct=0;
        char t1;
        cin>>n>>m>>q;
        vector<pair<char,int>> v;
        set<int> s;
        for(i=0;i<q;i++)
        {
            cin>>t1>>t2;
            v.push_back(make_pair(t1,t2));
        }
        for(i=0;i<q;i++)
        {
            //cout<<ct<<" ";
            if(v[i].first=='-')
            {
                if(s.count(v[i].second)==1)
                {
                    s.erase(v[i].second);
                    ct--;
                }
                else
                {
                    cout<<"Inconsistent"<<"\n";
                    chk=1;
                    break;
                }
            }
            else
            {
                if(s.count(v[i].second==1))
                {
                    cout<<"Inconsistent"<<"\n";
                    chk=1;
                    break;
                }
                else
                {
                    if(ct<m)
                    {
                        s.insert(v[i].second);
                        ct++;
                    }
                    else
                    {
                        cout<<"Inconsistent"<<"\n";
                        chk=1;
                        break;
                    }
                }
            }
        }
        if(chk==0)
            cout<<"Consistent"<<"\n";
    }
	return 0;
}