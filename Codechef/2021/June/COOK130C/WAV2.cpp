#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
#include <vector>
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,q,j,i,sll,suu,sz=0;
    int ele;
    cin>>n>>q;
    vector<int> a;
    vector<int> x;
    vector<int>::iterator sl, su;
    for(i=0;i<n;i++)
    {
        cin>>ele;
        a.push_back(ele);
    }
    for(i=0;i<q;i++)
    {
        cin>>ele;
        x.push_back(ele); 
    }
    sort(a.begin(), a.end());
    sz=a.size();
    for(i=0;i<q;i++)
    {
        ele=x[i];
        if(binary_search(a.begin(), a.end(),ele))
        {
            cout<<"0"<<"\n";
            continue;
        }
        sl=lower_bound(a.begin(),a.end(),ele);
        su=upper_bound(a.begin(),a.end(),ele);
        //sll = (ll) * sl;
        //suu = (ll) * su;
        sll=sl-a.begin();
        //sll=sll-a[0];
        //cout<<sll<<" ";
        //if(a[sll])
        if(sll%2==0)
        {
            cout<<"POSITIVE"<<"\n";
        }
        else
        {
            cout<<"NEGATIVE"<<"\n";
        }
        
    }
    /*for(i=0;i<q;i++)
    {
        sm=1;
        for(j=0;j<n;j++)
        {
            sm=sm*(x[i]-a[j]);
            //cout<<x[i]<<" "<<a[j]<<"\n";
        }
        //cout<<sm<<"\n";
        if(sm>0)
        {
            cout<<"POSITIVE"<<"\n"; 
        }
        else if (sm<0)
        {
            cout<<"NEGATIVE"<<"\n";
        }
        else
        {
            cout<<"0"<<"\n";
        }
    }*/
	return 0;
}
