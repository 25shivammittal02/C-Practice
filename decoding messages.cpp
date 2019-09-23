//https://practice.geeksforgeeks.org/problems/total-decoding-messages/0
#include <bits/stdc++.h>
using namespace std;
int fun(int *ar,int pos,int len)
{
    if(pos==len) 
    	return 1;
    if(ar[pos]==0) 
    	return 0;
    int op1=fun(ar,pos+1,len);
    int op2=0;

    if((pos<=len-2) and (((10*ar[pos])+ar[pos+1])<27))
    {
        op2=fun(ar,pos+2,len);
    }
    return op1+op2;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char t;
        int number[n];
        for(int i=0;i<n;i++){
            cin>>t;
            number[i]=t-'0';
        }
        cout<<fun(number,0,n)<<endl;
    }
	return 0;
}

/*
2
3
123
4
2563
*/