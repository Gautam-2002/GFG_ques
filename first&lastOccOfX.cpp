// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    vector<int> v;
    int i=-1,j=-1;
    int s=0, e=n-1, mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==x){
            i=mid;//first occ.
            e=mid-1;
        }
        else if(arr[mid]<x){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    s=0, e=n-1, mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==x){
            j=mid;//last occ.
            s=mid+1;
        }
        else if(arr[mid]<x){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    if(i==-1 && j!=-1){
        v.push_back(j);
        return v;
    }
    else if(j==-1 && i!=-1){
        v.push_back(i);
        return v;
    }
    else{
        v.push_back(i);
        v.push_back(j);
        return v;
    }
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends