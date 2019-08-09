//find max sub array Sum 
//Kadane's Algorithm

#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int current_sum = 0;
    int max_sum = 0;
    for(int i=0; i<n; i++)
    {
        current_sum = current_sum + arr[i];
        if(current_sum > max_sum)
        {
            max_sum = current_sum;
        }
        if(current_sum<0)
        {
            current_sum = 0;
        }
    }
    cout<<max_sum<<endl;

}