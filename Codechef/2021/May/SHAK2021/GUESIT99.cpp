#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int d,x;
        cin>>d;
        x=d%7;
        switch (x) {
        case 0:
            cout << "Sunday"<<"\n";
            break;
        case 1:
            cout << "Monday"<<"\n";
            break;
        case 2:
            cout << "Tuesday"<<"\n";
            break;
        case 3:
            cout << "Wednesday"<<"\n";
            break;
        case 4:
            cout << "Thursday"<<"\n";
            break;
        case 5:
            cout << "Friday"<<"\n";
            break;
        case 6:
            cout << "Saturday"<<"\n";
            break;
        }
    }
	return 0;
}
