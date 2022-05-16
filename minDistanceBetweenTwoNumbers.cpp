// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        int mindis=INT_MAX;
        int i1=-1,i2=-1;
        for(int i=0;i<n;i++){
         if(a[i]==x)i1=i;
         if(a[i]==y)i2=i;
         
         if(i1!=-1 && i2!=-1){
            mindis=min(mindis,abs(i1-i2));
         }
        }
        if(i1 == -1 || i2 == -1)return -1;
        return mindis;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}
  // } Driver Code Ends