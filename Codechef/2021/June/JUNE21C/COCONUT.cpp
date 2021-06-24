#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int xa1,xb1,xa2,xb2;
        cin>>xa1>>xb1>>xa2>>xb2;
        cout<<xa2/xa1+xb2/xb1<<"\n";
        
    }
	return 0;
}
