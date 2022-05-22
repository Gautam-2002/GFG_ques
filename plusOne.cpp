// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int n) {
        for(int i=n-1;i>=0;i--){
            if(arr[i]<9){
                arr[i]++;
                return arr;
            }
            else{
                arr[i]=0;
            }
        }
        vector<int> ans(n+1,0);
        ans[0]=1;
        return ans;
        //brute force
        // long long plusOne=0;
        // for(auto& it : arr){
        //     plusOne=(plusOne*10)+it;
        // }
        // plusOne++;
        // vector<int> ans;
        // while(plusOne){
        //     ans.push_back((plusOne%10));
        //     plusOne/=10;
        // }
        // reverse(ans.begin(),ans.end());
        // return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends