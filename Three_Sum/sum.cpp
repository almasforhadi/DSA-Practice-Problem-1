#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,target;
    cin>>n>>target;

    vector<pair<ll,ll>>v(n);

    for(ll i=0;i<n;i++)
    {
        cin>>v[i].first;
        v[i].second = i;
    }
    sort(v.begin(),v.end());   //O(n log n)  // sort, based on first element
    for(ll i=0;i<n-2;i++)     // O(n�)
    {
        int left = i+1, right = n-1;

        while(left<right)
        {
            int sum = v[i].first + v[left].first + v[right].first;

            if(sum == target)
            {
                cout<<v[i].second+1<<" "<<v[left].second+1<<" "<<v[right].second+1;
                return 0;
            }
            else if(sum > target)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
    }
    cout<<"IMPOSSIBLE";
}
// Complexity : O(n log n) + O( n ) = O( n)
// https://cses.fi/problemset/task/1641
