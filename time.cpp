//#include<time.h>

#include <bits/stdc++.h>
using namespace std;

int main()
{
    clock_t t;
    t=clock();
    int j=0;
    for(int i=0;i<10000000;i++)
    {
        j=i;
    }
    t=clock()-t;
    double time = ((double)t) / CLOCKS_PER_SEC;
    cout<<time;
}
