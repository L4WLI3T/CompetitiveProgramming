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
        //ll i;
        string a;
        cin>>a;
        /*ostringstream str1;
        str1 << a;
        string n = str1.str();*/
        if(a[0]=='1')
            a.insert(1,"0");
        else
            a.insert(0,"1");
        cout<<a<<"\n";
    }
	return 0;
}