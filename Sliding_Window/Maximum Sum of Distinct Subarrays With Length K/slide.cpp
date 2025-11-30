// Maximum Sum of Distinct Subarrays With Length K

#include <bits/stdc++.h>
using namespace std;

int helper(vector<int>& v, int n, int k)
{
    unordered_map<int, int> mp;
    int windowSum = 0, maxSum = 0;

    if(n < k)   return 0;

    for(int i=0; i<k ; i++)
    {
        windowSum+=v[i];
        mp[v[i]]++;
    }

    if (mp.size() == k)
    {
        maxSum = windowSum;
    }

    for (int i = k; i < n; i++)
    {
        mp[v[i-k]]--;
        mp[v[i]]++;

        if(mp[v[i-k]] == 0)
        {
            mp.erase(v[i-k]);
        }
        windowSum -= v[i-k];
        windowSum += v[i];

        if (mp.size() == k)
        {
            maxSum = max(maxSum, windowSum);
        }
    }
    return maxSum;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int k;
    cin>>k;

    cout << helper(v,n, k);
}


// Time-Complexity : O(k) + O(n-k) = O(n)
// Space-Complexity : O(k)
