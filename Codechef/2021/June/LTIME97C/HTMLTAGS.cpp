#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <string>
#define ll long long
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while(t--)
    {
        ll i,count=0;
        string n;
        cin>>n;
        //cout<<n.length()<<" ";
        if(n[0]=='<' && n[1]=='/' && n[n.length()-1]=='>')
        {
            for(i=2;i<n.length()-1;i++)
            {
                if(/*(int(n[i])>=65 && int(n[i])<=90)||*/(int(n[i])>=97 && int(n[i])<=122)||(int(n[i])>=48 && int(n[i])<=57))
                {
                    count++;
                }
            }
            //cout<<count<<" ";
            if(count==n.length()-3 && count!=0)
            {
                cout<<"Success"<<"\n";
            }
            else
            {
                cout<<"Error"<<"\n";
            }
        }
        else
            cout<<"Error"<<"\n";
    }
	return 0;
}
