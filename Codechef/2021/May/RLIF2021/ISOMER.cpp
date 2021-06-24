using namespace std;
#include <bits/stdc++.h>
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	int lst[20]={1,1,1,2,3,5,9,18,35,75,159,355,802,1858,4347,10359,24894,60523,148284,366319 };
	while(t--)
	{
	    int c;
	    cin>>c;
	    cout<<lst[c-1]<<"\n";
	    
	}
	return 0;
}
