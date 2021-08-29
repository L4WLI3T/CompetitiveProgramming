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
        ll n,i,a1,a2,a3,a4,c=0,cu=0,cth=0,cft=0;
        int ele;
        vector<int> v;
        int a[4];
        for( i=0;i<4;i++)
        {
            cin>>ele;
            //v.push_back(ele);
            a[i]=ele;
        }
        sort(a,a+4);
        //cout<<a[0]<<a[1]<<a[2]<<a[3]<<"\n";
        if(a[0]==a[1] && a[1]==a[2] && a[2]==a[3])
        {
            cout<<"0"<<"\n";
        }
        else if((a[0]==a[1] && a[1]==a[2]) || (a[1]==a[2] && a[2]==a[3]))
        {
            cout<<"1"<<"\n";
        }
        else
        {
            cout<<"2"<<"\n";
        }
        /*unordered_map<int, int> ump;
        unordered_map<int, int>::iterator itr;
        for (int const &i: v) 
        {
            ump[i]++;
        }
        for(itr=ump.begin();itr!=ump.end();++itr)
        {
            if(itr->second==1)
            {
                c++;
            }
            else if(itr->second==2)
            {
                cu++;
            }
            else if(itr->second==3)
            {
                cth++;
            }
            else
            {
                cft++;
            }
        }
        if(c>=2)
        {
            cout<<"2"<<"\n";
        }
        else if(c=1 && cth==3)
        {
            cout<<"1"<<"\n";
        }
        else
        {
            cout<<"0"<<"\n";
        }*/
    }
	return 0;
}
