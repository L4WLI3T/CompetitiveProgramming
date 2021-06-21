#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        int d,d1,a,b,c;
        cin>>d>>d1>>a>>b>>c;
        int run;
        run=d*d1;
        if (run<10)
        {
            cout<<"0"<<"\n";
        }
        else if (run<21)
        {
            cout<<a<<"\n";
        }
        else if (run<42)
        {
            cout<<b<<"\n";
        }
        else
        {
            cout<<c<<"\n";
        }
    }
	return 0;
}