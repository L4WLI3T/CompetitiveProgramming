#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,a,b,count;
	    count=0;
	    cin>>n>>m;
        for(b=2;b<=n;b++)
        {
            
            for(a=1;a<b;a++)
            {
                if((m%a)%b==(m%b)%a)
                {
                    count++;
                }
            }
        }
        cout<<count<<"\n";
	}
	return 0;
}
