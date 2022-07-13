// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int n) {
        // ll x,y;
        // x=A[0],y=B[0];
        // for(int i=1;i<n;i++){
        //     x=x^A[i];
        //     y=y^B[i];
        // }
        // ll xy=x^y;
        // if(xy==0){
        //     return 1;
        // }
        // return 0;
        //above approch uses const space but only work when elements are distinct
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[A[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp.find(B[i])!=mp.end()){
                mp[B[i]]--;
            }
            else{
                return 0;
            }
        }
        for(auto i : mp){
            if(i.second!=0)return 0;
        }
        return 1;
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        
        
        // iterate through another array
        // and decrement the count of elements
        // in the map in which frequency of elements
        // is stored for first array
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        Solution ob;
        cout << ob.check(arr,brr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends