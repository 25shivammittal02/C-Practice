//Return the greater value between sum of even and odd digits of a number
#include <bits/stdc++.h> 
using namespace std;  

int main() 
{ 
    int n;
    cin>>n;
    int even =0;
    int odd = 0;
    while(n>0)
    {
        even = even + (n%10);
        n=n/10;
        odd = odd + (n%10);
        n = n/10;
    }
    cout<<max(even,odd);
} 


/*
Sample
24523
*/