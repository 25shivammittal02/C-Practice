// gray codes 
#include <bits/stdc++.h> 
using namespace std; 

// void decimalToBinaryNumber(int x, int n) 
// { 
// 	int* binaryNumber = new int(x); 
// 	int i = 0; 
// 	while (x > 0) { 
// 		binaryNumber[i] = x % 2; 
// 		x = x / 2; 
// 		i++; 
// 	} 
// 	for (int j = 0; j < n - i; j++) 
// 		cout << '0'; 

// 	for (int j = i - 1; j >= 0; j--) 
// 		cout << binaryNumber[j]; 
// } 

void generateGrayarr(int n) 
{ 
	int N = 1 << n;
	bitset<32> b; 
	for (int i = 0; i < N; i++) {  
		int x = i ^ (i >> 1);
		b=x;
		cout<<b; 
		// decimalToBinaryNumber(x, n); 

		cout << endl; 
	} 
} 

// Drivers code 
int main() 
{ 
	int n;
	cin>>n; 
	generateGrayarr(n); 
	return 0; 
} 
