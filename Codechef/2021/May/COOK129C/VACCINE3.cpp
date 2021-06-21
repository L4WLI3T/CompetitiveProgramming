#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <cmath>
#include <vector>
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        int g,p,a,min,max,rem=0,j=10;
        vector<int> x;
        cin>>g>>p;
        for(int i=1;i<=10;i++)
        {
            cin>>a;
            x.push_back(a);
        }
        
        //cout<<g<<x[g]<<"\n";
        while(j>=g)
        {
            //cout<<rem<<" "<<x[j]<<"\n";
            rem += x[j];
            j--;

        }
        //cout<<rem;
        min = ceil((float(rem+1))/p);
        max = ceil(float(rem+x[--g])/p);
        cout<<min<<" "<<max<<"\n";
    }
    return 0;
}