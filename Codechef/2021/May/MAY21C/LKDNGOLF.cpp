#include <iostream>
using namespace std;
#include<cmath>
int main() {
    int tile,hop,hole,x;
    std::cin>>x;
    while(x>=1){
        std::cin>>tile>>hole>>hop;
        if(hole%hop==0 || (tile+1-hole)%hop==0)
        {
            std::cout<<"YES"<<endl;
        }
        else
        {
            std::cout<<"NO"<<endl;
        }
        x--;
    }

    return 0;
}