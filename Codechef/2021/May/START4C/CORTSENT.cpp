#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <string>
int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int k,i,ll1=0,ll2=0,ll3=0;
	    string si,sj;
	    vector<string> s;
	    cin>>k;
	    for(i=0;i<k;i++)
	    {
	        cin>>si;
	        s.push_back(si);
	    }
	    for(i=0;i<k;i++)
	    {
	        int l1=0,l2=0,l3=0;
	        sj=s[i];
	        for(int j=0;j<sj.length();j++)
	        {
	            if((int)sj[j]>77 && (int)sj[j]<91)
	            {
	                l2++;
	            }
	            else if((int)sj[j]>96 && (int)sj[j]<110)
	            {
	                l1++;
	            }
	            else
	            {
	               l3++; 
	            }
	        }
	        //cout<<(int)sj[0]<<l1<<l2<<l3<<"\n";
	        if(l3>0)
	        {
	           ll3++ ;
	        }
	        else if(l1==sj.length())
	        {
	            ll1++;
	        }
	        else if(l2==sj.length())
	        {
	            ll2++;
	        }
	        else
	        {
	            ll3++;
	        }
	    }
	    if(ll3>0)
	    {
	        cout<<"NO"<<"\n";
	    }
	    else
	    {
	        cout<<"YES"<<"\n";
	    }
	}
	return 0;
}
