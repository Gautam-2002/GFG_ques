// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int> v;
        v.push_back(-1);
        long long int left = 0, right = 0;
        long long int currentSum = 0;
        while (left <= n && right <= n)
        {
            if (currentSum < s)
            {
                currentSum = currentSum + arr[right];
                right++;
            }
            if (currentSum > s)
            {
                currentSum = currentSum - arr[left];
                left++;
            }
            if (currentSum == s)
            {
                v.pop_back();
                v.push_back(left + 1);
                v.push_back(right);
                return v;
            }
        }

        return v;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long s;
        cin >> n >> s;
        int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
} // } Driver Code Ends
