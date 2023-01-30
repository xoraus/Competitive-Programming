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
 
	long long int X;
	long long int Y;
 
	cin>>X>>Y;
 
	int xdigit = X%10;
	int ydigit = Y%10;
 
	int sum = xdigit + ydigit;
 
	cout<<sum;
 
}