#include <iostream>

using namespace std;

int main()
{
    int x,a,b,c,res;
   std::cin>>x;
   while(x>=1){
       std::cin>>a>>b>>c;
       res=(b+(100-a)*c)*10;
       std::cout<<res<<endl;
       x--;
   }
    return 0;
}