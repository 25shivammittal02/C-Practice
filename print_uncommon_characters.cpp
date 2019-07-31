#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s1,s2;
    cin>>s1>>s2;
    map<char, int> m1;
    map<char, int> m2;
    for(int i=0;i<s1.length(); i++)
    {
        m1[s1[i]]++;
    }
    cout<<"Map1 after 1st string"<<endl;
    for(auto itr = m1.begin();itr!=m1.end();itr++)
    {
        cout<<itr->first<<" ";
    }
    cout<<endl;
    for(int i=0;i<s2.length(); i++)
    {
        m2[s2[i]]++;
    }
    cout<<"Map2 after 2nd string"<<endl;
    for(auto itr = m2.begin();itr!=m2.end();itr++)
    {
        cout<<itr->first<<" ";
    }
    cout<<endl;

    for(auto itr = m2.begin(); itr!=m2.end();itr++)
    {
        if(m1[itr->first]>0)
        {
            m1.erase(itr->first);
        }
        else
        {
            m1[itr->first]++;
        }
    }
    cout<<"Deletion done"<<endl;
    for(auto itr = m1.begin();itr!=m1.end();itr++)
    {
        cout<<itr->first<<" ";
    }
    return 0;
}


/*
Sample test case
shivam
siddhant

*/