#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
ll vis[100005];
void testCase()
{
    ll t; cin>>t; while(t--)
    {
       ll n;
       cin>>n;
       ll ar[n],b[n];
       for(int i=0;i<n;i++)
       cin>>ar[i];
       
       for(int i=0;i<n;i++)
       cin>>b[i];
      
       vector<ll>v;
       ll ans=0;
       for(int i=30;i>=0;i--) {
       	ll cnt=0;
       	vector<ll>tmp;
       	for(int j=0;j<n;j++) {
       		if(ar[j] & (1<<i)) {
       			cnt++;
       		}
       		else if(b[j] & (1<<i) && !vis[j]) {
       			bool check=true;
       			for(int k=0;k<v.size();k++) {
       				if(!(b[j]&(1<<v[k]))) {
       					check=false;
       					break;
       				}
       			}
       			if(check) {
       				tmp.push_back(j);
       				cnt++;
       			}
       		}
       	}
       	if(cnt==n) {
       		for(int i=0;i<tmp.size();i++) {
       			vis[tmp[i]]=true;
       			swap(ar[tmp[i]], b[tmp[i]]);
       		}
       		v.push_back(i);
       		ans+=(1<<i);
       	}
       }
       ll cnt=0;
       for(int i=0;i<n;i++){
       	if(vis[i])
       	cnt++;
       }
       
       cout<<ans<<" "<<cnt<<endl;
       
       for(int i=0;i<n;i++)
       vis[i]=false;
       
       
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    testCase();
    return 0;
}