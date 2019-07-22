//Palin dates
#include<bits/stdc++.h>
using namespace std;
 
string findNextPalinDate (string s) {
    string d = string(1,s.at(0)) + string(1,s.at(1));
    string m = string(1,s.at(3)) + string(1,s.at(4));
    string pd = string(1,s.at(1)) + string(1,s.at(0));
    string pm = string(1,s.at(4)) + string(1,s.at(3));
    string ans;
    if(d<pm and pm<= "60")
    {
        ans = pm + "|" + m;
        return ans;
    }
    else
    {
        int neww = stoi(m) + 1;
        if(neww>30)
        {
            neww = 1;
            //cout<<neww;
        }
        int n1 = neww/10;
        int n2 = neww%10;
        m = to_string(n1) + to_string(n2);
        pm = string(1,m.at(1)) + string(1,m.at(0));
        
    }
    while(pm>"60")
    {
        int neww = stoi(m) + 1;
        if(neww>30)
        {
            neww = 1;
            //cout<<neww;
        }
        int n1 = neww/10;
        int n2 = neww%10;
        m = to_string(n1) + to_string(n2);
        pm = string(1,m.at(1)) + string(1,m.at(0));
    }
    if( pm<= "60")
    {
        ans = pm + ":" + m;
    }
   // Write your code here
   return ans;
}
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    string input;
    getline(cin, input);
 
    string out_;
    out_ = findNextPalinDate(input);
    cout << out_;
}