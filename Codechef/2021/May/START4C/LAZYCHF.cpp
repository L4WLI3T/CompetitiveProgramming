#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <cmath>
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        int x,m,d;
        cin>>x>>m>>d;
        cout<<min(x*m,x+d)<<"\n";
    }
	return 0;
}
