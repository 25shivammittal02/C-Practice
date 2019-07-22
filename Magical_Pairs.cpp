//Magical Pairs

#include<bits/stdc++.h>
using namespace std;
 
vector<int> solve (vector<int> arr, int n) {
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int ans;
        for(int j=0;j<n;j++)
        {
            ans =arr[i] & arr[j];
            if(ans == 0)
            {
                v.push_back(1);
                break;
            }
        }
        if(ans!=0)
        {
            v.push_back(0);
        }
    }
   return v;
}
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
        vector<int> arr(N);
        for(int i_arr=0; i_arr<N; i_arr++)
        {
        	cin >> arr[i_arr];
        }
 
        vector<int> out_;
        out_ = solve(arr, N);
        cout << out_[0];
        for(int i_out_=1; i_out_<out_.size(); i_out_++)
        {
        	cout << " " << out_[i_out_];
        }
        cout << "\n";
    }
}