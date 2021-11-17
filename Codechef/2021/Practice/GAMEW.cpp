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
        ll n,i,j,bct=0;
        cin>>n;
        string s;
        cin>>s;
        vector <char> vc;
        vector<vector<char>> v;
        for(i=0;i<n;i++)
        {
            if(s[i]==s[i+1])
            {
                vc.push_back(s[i]);
            }
            else if(s[i]!=s[i+1])
            {
                ++bct;
                vc.push_back(s[i]);
                v.push_back(vc);
                vc.clear();
            }
        }
        /*for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;*/
        //cout<<bct<<"\n";
        //cout<<v.size();
        bct=v.size();
        if(bct%3==2)
        {
            cout<<"RAMADHIR"<<"\n";
        }
        else
            cout<<"SAHID"<<"\n";
    }
	return 0;
}