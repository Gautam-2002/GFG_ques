//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{
public:

    vector<int> ans;
    vector<int> subsetSums(vector<int> arr, int n)
    {

        helper(arr,n,0,0);
        return ans;
    }
    void helper(vector<int> &arr,int n,int idx, int sum){
        if(idx==n){
            ans.push_back(sum);
            return;
        }
        helper(arr,n,idx+1,sum+arr[idx]);
        helper(arr,n,idx+1,sum);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends