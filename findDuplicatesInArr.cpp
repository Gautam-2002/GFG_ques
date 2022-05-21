// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    //best approach
    vector<int> duplicates(int arr[], int n) {
        vector<int> v;
        for(int i=0;i<n;i++){
            int idx=arr[i]%n;
            arr[idx]+=n;
        }
        for(int i=0;i<n;i++){
            if((arr[i]/n)>=2){
                v.push_back(i);
            }
        }
        if(v.empty()){
            v.push_back(-1);
        } 
        return v;
    }
    //Brute force:
    // vector<int> duplicates(int arr[], int n) {
    //     vector<int> v;
    //     int j=-1;
    //     sort(arr,arr+n);
    //     for(int i=0;i<n;i++){
    //         if(arr[i]==arr[i+1] && j!=arr[i]){
    //             j=arr[i];
    //             v.push_back(arr[i]);
    //         }
    //     }
    //     if(v.empty()){
    //         v.push_back(-1);
    //     } 
    //     return v;
    // }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends