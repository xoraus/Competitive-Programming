#include<iostream>
using namespace std;
 
int main() {
	#ifndef ONLINE_JUDGE
		// for getting input from input.text
		freopen("input.txt", "r", stdin);
		// for writing output to input.text
		freopen("output.txt", "w", stdout);
	#endif
 
	long long int A;
	long long int B;
	long long int C;
	long long int D;
 
	long long int X;
 
	cin>>A>>B>>C>>D;
 
	X = ((A*B) - (C*D));
 
	cout<<"Difference"<<" = "<<X;
 
 
}