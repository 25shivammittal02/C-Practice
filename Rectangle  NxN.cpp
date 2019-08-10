// //https://practice.geeksforgeeks.org/problems/rectangles-in-nn-board/0/?ref=self
// #include <iostream>
// using namespace std;

// int main() {
// 	//code
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int n;
// 	    cin>>n;
// 	    long long int ans =0;
// 	    for(int i=0;i<n-1;i++)
// 	    {
// 	        for(int j=i+1;j<n;j++)
// 	        {
// 	            ans  = ans + (n-j)*(n-i)*2;
// 	        }
// 	    }
// 	    cout<<ans<<endl;
// 	}
// 	return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int sum=0;
        
        for(long long int i=2;i<=n;i++){
            sum=sum+(i*i*(i-1));
        }
        cout<<sum<<endl;
    }
	//code
	return 0;
}