//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        int s1=0,s2=0;
        for(int i=0;i<n;i++){
            s1+=A[i];
        }
        for(int i=0;i<m;i++){//Logic:
            s2+=B[i];//s1-A[i]+B[i]==s2-B[i]+A[i];
            B[i]*=2;//=>2B[i]==s2-s1 + 2*A[i];
        }
        if((abs(s1-s2))%2==1)return -1;
        sort(B,B+m);
        for(int i=0;i<n;i++){
            int need=s2-s1 + 2*A[i];
            if(binary_search(B,B+m,need)){
                return 1;
            }
        }
        return -1;
        
	}
 

};

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}






// } Driver Code Ends