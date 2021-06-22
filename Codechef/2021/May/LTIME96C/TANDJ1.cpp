#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long
int main() {
	// your code goes here
	ll t; cin>>t;
	while(t--)
	{
	    ll a,b,c,d,k;
	    cin>>a>>b>>c>>d>>k;
	    if(a>c)
	    {
	     if(d>b)
	     {
	         if((a-c)+(d-b)==k || (a-c)+(d-b)<k && (k-(a-c)+(d-b))%2==0)
	            cout<<"YES"<<"\n";
	         else
	            cout<<"NO"<<"\n";
	   
	     }
	     else
	     {
	         if((a-c)+(b-d)==k || (a-c)+(b-d)<k && (k-(a-c)+(b-d))%2==0)
	            cout<<"YES"<<"\n";
	         else
	            cout<<"NO"<<"\n";
	     }
	    }
	    else
	    {
	        if(d>b)
	        {
	         if((c-a)+(d-b)==k || (c-a)+(d-b)<k && (k-(c-a)+(d-b))%2==0)
	            cout<<"YES"<<"\n";
	         else
	            cout<<"NO"<<"\n";
	   
	        }
	     else
	        {
	         if((c-a)+(b-d)==k || (c-a)+(b-d)<k && (k-(c-a)+(b-d))%2==0)
	            cout<<"YES"<<"\n";
	         else
	            cout<<"NO"<<"\n";
	        }  
	    }
	}
	return 0;
}
