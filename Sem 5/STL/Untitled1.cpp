#include <iostream> 
#include<bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	pair<int, int>pair1 = make_pair(2, 12); 
	pair<int, int>pair2 = make_pair(9, 3);
	pair1.swap(pair2);

	cout<<pair1.first<<"-"<<pair1.second<<"--"<<pair2.first<<"-"<<pair2.second<<endl;
	cout << (pair1 == pair2) << endl; 
	cout << (pair1 != pair2) << endl; 
	cout << (pair1 >= pair2) << endl; 
	cout << (pair1 <= pair2) << endl; 
	cout << (pair1 > pair2) << endl; 
	cout << (pair1 < pair2) << endl; 

	return 0; 
} 

