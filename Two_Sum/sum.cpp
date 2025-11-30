#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,sum;
    cin>>n>>sum;

    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)
    {
        ll k = sum - v[i];

        if(mp.count(k))
        {
            cout<<mp[k]+1<<" "<<i+1;
            return 0;
        }
        mp[v[i]] = i;
    }
     cout<<"IMPOSSIBLE";
}

// Complexity: O(n)     :  unordered_map<int,int>mp (hash-table : O(1)) ,,TLE → because of hash collisions with large long long keys.
// Complexity: O(nlogn)  : map<int,int>mp (balanced BST : O(log2n) )


