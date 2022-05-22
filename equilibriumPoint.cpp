// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        if(n==1)return 1;
        long long sumOfAllElements=0;
        for(int i=0;i<n;i++){
            sumOfAllElements+=a[i];
        }
        long long sumTillIdx=a[0];
        for(int i=1;i<n-1;i++){
            if((sumOfAllElements-sumTillIdx) == (sumTillIdx-a[i-1])){
                return (i);
            }
            sumTillIdx+=a[i];
        }
        return -1;
        
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends