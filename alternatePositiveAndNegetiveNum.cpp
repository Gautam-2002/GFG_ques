#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int> arr1,arr2;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0)
	        arr1.push_back(arr[i]);
	        else
	        arr2.push_back(arr[i]);
	    } int i=0,p=0,k=0;
	    while(p<arr1.size() && k<arr2.size() && i<n){
	        arr[i++]=arr1[p++];
	        arr[i++]=arr2[k++];
	    }
	    while(p<arr1.size() && i<n){
	        arr[i++]=arr1[p++];
	    }
	    while(k<arr2.size() && i<n){
	        arr[i++]=arr2[k++];
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends