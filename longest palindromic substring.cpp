//longest palindromic string
//https://www.geeksforgeeks.org/longest-palindromic-substring-set-2/
#include <bits/stdc++.h> 
using namespace std;  

void longestpalindrome(string s)
{
    int maxlength = 1;
    int start = 0;
    int len = s.length();
    int low, high;
    
    for(int i=1;i<len;i++)
    {
        //for even
        low = i-1;
        high = i;
        while(low>=0 and high <len and s[low]==s[high])
        {
            if(high -low +1 > maxlength)
            {
                start = low;
                maxlength = high - low +1;
            }
            low--;
            high++;
        }
        //for odd
        low = i-1;
        high = i+1;
        while(low>=0 and high <len and s[low]==s[high])
        {
            if(high -low +1 > maxlength)
            {
                start = low;
                maxlength = high - low +1;
            }
            low--;
            high++;
        }
    }
    cout<<"maxlength = "<<maxlength<<endl;
    cout<<s.substr(start, maxlength);
}

int main() 
{ 
    string s;
    cin>>s;
    longestpalindrome(s);

} 


/*
Sample
forgeeksskeegfor

*/