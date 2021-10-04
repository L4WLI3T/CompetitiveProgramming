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
        ll i,c=0;
        char cur='1';
        string s;
        cin>>s;
        for(i=0;i<s.length();i++)
        {
            if(s[i]!=cur)
            {
                c++;
                cur=s[i];
            }
        }
        cout<<c<<"\n";
        
    }
	return 0;
}