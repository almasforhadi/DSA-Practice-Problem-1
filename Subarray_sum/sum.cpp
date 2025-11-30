// Subarray Sum Equals K
// It's like Two sum

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int target;cin>>target;
    int curr_sum = 0, count = 0;
    unordered_map<int,int>mp;         //unordered_map → average case O(1)
    mp[0] = 1;                     //কারণ এটি subarrays starting from index 0 কভার করতে সাহায্য করে।
    for(int i=0;i<n;i++)
    {
        curr_sum += v[i];
        int k = curr_sum - target;

        if(mp.count(k))
        {
            count += mp[k];  // how many times found
        }
        mp[curr_sum]++;
    }
    cout<<count;
}
// Time - complexity : O(n) * O(logn) = O(nlogn)  //just map hole
// Time - complexity : O(n) * O(1) = O(n)         //unordered_map hole
// space complexity : O(n)
