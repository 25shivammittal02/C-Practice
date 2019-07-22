//Special substring
#include<bits/stdc++.h>
using namespace std;
 
bool isSpecial(string x) {
    if(x.length()==1) {
        return true;
    }
    if(x==string(x.length(),x[0])) {
        return true;
    }
    else if(x.length()%2!=0 and x!=string(x.length(),x[0])) {
        string y(x);
        if(y.substr(0,x.length()/2)==y.substr(x.length()/2+1,x.length()/2) and y.substr(0,x.length()/2)== string(x.length()/2,x[0]))
            return true;
        else 
            return false;
    }
    else {
        return false;
    }
}
 
int main() {
    string x;
    cin>>x;
    long long int pp = x.length();
    long long count = 0;
    for(long long int i=0;i<x.length();i++) {
        for(long long int j=1;j<=pp;j++) {
            if(isSpecial(x.substr(i,j))) {
                //cout<<x.substr(i,j)<<endl;
                count++;
            }
        }
        pp--;
    }
    cout<<count<<endl;
    return 0;
}