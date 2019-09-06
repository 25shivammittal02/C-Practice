// Given an integer n, return simplified version of n, simplified version means adding all the individual digits of all the n to form another number n and repeat this task to get a final single digit number which will be our answer.
#include <bits/stdc++.h>
using namespace std;

int simplify(int n)
{
    if(n<10)
    {
        return n;
    }
    int sum =0;
    while(n>0)
    {
        sum = sum + n%10;
        n = n/10;
    }
    return simplify(sum);
}

int main() 
{
    int n;
    cin>>n;
    cout<<simplify(n);
}  

/*
Sample
576

*/