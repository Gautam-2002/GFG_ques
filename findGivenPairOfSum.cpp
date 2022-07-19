//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int x)
    {//o(n*n) solution
        pair<long long,long long> sum;
        vector<pair<int,int>> ans;
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(A[i]+B[j]==x){
                    sum=make_pair(A[i],B[j]);
                    ans.push_back(sum);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
// An Efficient solution of this problem is to hashing. Hash table is implemented using unordered_set in C++. 
 //TC->o(max(n,m))
 //SC->o(n)
// We store all first array elements in hash table.
// For elements of second array, we subtract every element from x and check the result in hash table.
// If result is present, we print the element and key in hash (which is an element of first array).
//or
//we can search k-B[i] using binary search(on sorted A[] array)
//this approach uses o(nlogn)->TC and o(1) space complexity

//{ Driver Code Starts.
int main() {
	long long t;
	cin >> t;
	
	while(t--){
	    int N, M, X;
	    cin >> N >> M >> X;
        int A[N], B[M];
        
	    for(int i = 0;i<N;i++)
	        cin >> A[i];
	    for(int i = 0;i<M;i++)
	        cin >> B[i];
	        
	   Solution ob;
	   vector<pair<int,int>> vp = ob.allPairs(A, B, N, M, X);
	   int sz = vp.size();
        if(sz==0)
        cout<<-1<<endl;
        else{
            for(int i=0;i<sz;i++){
                if(i==0)
                cout<<vp[i].first<<" "<<vp[i].second;
                else
                cout<<", "<<vp[i].first<<" "<<vp[i].second;
            }
            cout<<endl;
        }
	}
	return 0;
}
// } Driver Code Ends