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
	    
	    int n,m,k,i,ele,c=0;
	    vector<int> l;
	    set<int> s;
	    set<int>::iterator it ;
	    //map<int,int> m;
	    unordered_map<int, int> umap;
	    cin>>n>>m>>k;
	    for(i=1;i<=k;i++)
	    {
	        cin>>ele;
	        l.push_back(ele);
	    }
	    if(k==1)
	    {
	        cout<<"0"<<"\n";
	    }
	    else
	    {
	        for (int i : l)
                    umap[i]++;
            for (auto i : umap)
            {
                if(i.second>1 && i.first<=n)
                {
                    s.insert(i.first);
                }
            }
            cout<<s.size()<<" ";
	        for (it = s.begin() ; it != s.end() ; it++ ) 
            {
                cout << *it<<" ";
            }
            cout<<"\n";
	    }
	}
	return 0;
}
