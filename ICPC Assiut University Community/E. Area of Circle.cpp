#include<iostream>
#include<iomanip>
using namespace std;
 
int main() {
	#ifndef ONLINE_JUDGE
		// for getting input from input.text
		freopen("input.txt", "r", stdin);
		// for writing output to input.text
		freopen("output.txt", "w", stdout);
	#endif
 
	double R;
 
	cin>>R;
 
	double area = 3.141592653 * ( R * R);
 
	cout<<setprecision(12)<<area;
 
}