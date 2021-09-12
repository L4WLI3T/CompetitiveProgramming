#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define ll long long
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while(t--)
    {
        ll n,p,k,i,x,r,ans=0;
        cin>>n>>p>>k;
        //vector<int> a,num;
        //vector<int> temp;
        /*vector<vector<int>> a;
        for(i=0;i<n;i++)
        {
            
            vector<int> temp;x=i%k;
            temp.push_back(i);
            temp.push_back(x);
            //num.push_back(i);
            a.push_back(temp);
        }*/
        r=p/k+1;
        if((n-1)%k<p%k-1)
        {
            ans=((n-1)%k+1)*((n-1)/k+1)+((p%k-1)-((n-1)%k))*((n-1)/k);
        }
        else
        {
            ans=((n-1)/k+1)*(p%k);
        }
        /*sort(a[0].begin(), a[0].end());
        //sort(a[0].begin(), a[0].end());
        //sort(a,a+n);
        //sort(a.begin(), a.end());
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }*/
        for(i=p%k;i<n;i+=k)
        {

            ans++;
            if(i==p)
            {
                break;
            }
            //ans++;
        }
        /*cout<<i+1<<"\n";*/
        cout<<ans<<"\n";
    }
	return 0;
}
