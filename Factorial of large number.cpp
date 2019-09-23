//Factorial of large number
#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	string result ="1";
	for(int i=2;i<=n;i++)
	{
		string s="";
		int sum=0;
		int carry =0;
		for(int j=result.length()-1;j>=0;j--)
		{
			int temp = result[j]-'0';
			temp = temp*i + carry;
			carry = temp/10;
			sum= temp%10;
			s = to_string(sum) +s;
		}
		if(carry!=0)
		{
			s = to_string(carry) + s;
		}
		result = s;
	}
	cout<<result;
	return 0;
}