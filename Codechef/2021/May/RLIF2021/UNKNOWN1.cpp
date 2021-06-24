#include <iostream>
using namespace std;
#include <iomanip>
int main() {
	// your code goes here
	double a,b;
	cin>>a>>b;
	cout<<fixed<<setprecision(1)<<a+b<<endl;
	cout<<fixed<<setprecision(1)<<a-b<<endl;
	cout<<fixed<<setprecision(1)<<a*b<<endl;
	cout<<fixed<<setprecision(1)<<a/b<<endl;
	return 0;
}
