#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include<cmath>
int prime(int n){
   if (n <= 1)
      return 0;
   for (int i = 2; i <= sqrt(n); i++){
      if (n % i == 0)
         { return 0; }
   }
   return 1; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,count=0;
    cin>>n;
    for(int i=1;i<=n;i++){
      if(prime(i)==1)
         { 
             count++; 
             
         }
   }
   cout<<count;
   return 0;
}
