//TOH
#include <bits/stdc++.h>
using namespace std;
void toh(char scr, char helper, char dest, int n)
{
    if(n==0)
    {
        return;
    }
    toh(scr, dest, helper, n-1);
    cout<<"Moving ring "<<n<<" from "<<scr<<" to "<<dest<<endl;
    toh(helper, scr, dest, n-1);
}


int main() 
{
    int n;
    cin>>n;
    toh('A','C','B',n);
    return 0;
}  

/*
Sample
4

*/