#include<iostream>
using namespace std;
 
int main() {
	#ifndef ONLINE_JUDGE
		// for getting input from input.text
		freopen("input.txt", "r", stdin);
		// for writing output to input.text
		freopen("output.txt", "w", stdout);
	#endif
 
	int X;
	long long Y;
 
	cin>>X>>Y;
 
	cout<<X<<" + "<<Y<<" = "<<X+Y<<endl;
	cout<<X<<" * "<<Y<<" = "<<X*Y<<endl;
	cout<<X<<" - "<<Y<<" = "<<X-Y;
}