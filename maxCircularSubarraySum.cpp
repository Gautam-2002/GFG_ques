//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int n){
        if(n==1)return arr[0];
        int kmax=INT_MIN,currsum1=0,totalsum=0,kmin=INT_MAX,currsum2=0,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            currsum1+=arr[i];
            kmax=max(kmax,currsum1);
            if(currsum1<0)currsum1=0;
            
            totalsum+=arr[i];
            
            currsum2+=arr[i];
            kmin=min(kmin,currsum2);
            if(currsum2>0)currsum2=0;
            
            maxi=max(maxi,arr[i]);
        }
        int ans1=kmax;
        int ans2=totalsum-kmin;
        if(ans1<=0 && ans2<=0)return maxi;
        if(ans1>ans2)return ans1;
        else return ans2;
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends