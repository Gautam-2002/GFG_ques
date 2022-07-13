// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int Maximize(int a[],int n)
    {
        sort(a,a+n);
        long long sum=0;
        const unsigned int m=1000000007;//pow(10,9)+7;or1e9+7
        for(int i=0;i<n;i++){
            sum=((sum%m)+((a[i]%m)*(i%m)))%m;
        }
        return sum;
        // ( a + b) % c = ( ( a % c ) + ( b % c ) ) % c
        // ( a * b) % c = ( ( a % c ) * ( b % c ) ) % c
        // ( a – b) % c = ( ( a % c ) – ( b % c ) ) % c
        // ( a / b ) % c = ( ( a % c ) / ( b % c ) ) % c
        // NOTE: The result of ( a % b ) will always be less than b.
    }
};

// { Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}  // } Driver Code Ends