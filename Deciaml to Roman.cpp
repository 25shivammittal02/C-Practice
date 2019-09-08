// C++ Program to convert decimal number to roman numerals 
#include <bits/stdc++.h> 
using namespace std; 

string ans;
void printRoman(int n) 
{ 
    int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000}; 
    string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};     
    
    while(n>0) 
    { 
        int i;
        for(i=12;i>=0;i--)
        {
            if(num[i]<=n)
            {
                break;
            }
        }
        int q = n/num[i];
        n = n%num[i];
        for(int j=0;j<q;j++)
        {
            ans = ans + sym[i];
        }
    }
} 

//Driver program 
int main() 
{ 
    int n;
    cin>>n;
    ans="";
    printRoman(n);
    cout<<ans;
    return 0; 
} 

/*
342


CCCXLII
*/