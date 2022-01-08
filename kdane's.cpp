#include <bits/stdc++.h>
using namespace std;
//kdane's Algorithm
/*
sample testccase:
N = 5
Arr[] = {1,2,3,-2,5}
*/
long long maxSubarraySum(int arr[], int n){
        int maxsum=INT_MIN;
        int currsum=0;
        for(int i=0;i<n;i++){
            currsum+=arr[i];
            if(currsum>maxsum){
                maxsum=currsum;
            }
            if(currsum<0){
                currsum=0;
            }
        }
        return maxsum;
    };

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<maxSubarraySum(arr,n);
    return 0;
}