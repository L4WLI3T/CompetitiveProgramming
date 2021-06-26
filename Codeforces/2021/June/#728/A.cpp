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
        ll c,i;
        vector<int> v;
        cin>>c;
        for(i=0;i<c;i++)
        {
            v.push_back(i+1);
        }
        if(c<=3)
        {
            if(c==3)
            {
                cout<<v[c-1]<<" "<<v[c-3]<<" "<<v[c-2];
            }
            else if(c==2)
            {
                cout<<v[c-1]<<" "<<v[c-2];
            }
            else
                cout<<v[0];
        }
        else
        {
            //v[0]=c;
            for(i=0;i<c-3;i+=2)
            {
                cout<<v[i+1]<<" "<<v[i]<<" ";
            }
            if(c%2==0)
                cout<<v[c-1]<<" "<<v[c-2];
            else
                cout<<v[c-1]<<" "<<v[c-3]<<" "<<v[c-2];
        }
        cout<<"\n";
    }
	return 0;
}
