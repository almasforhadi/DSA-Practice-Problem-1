#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    map<int,int>mp;       // map is a balanced BST

    for(int i=0;i<n;i++)  // O(n)
    {
        int x;
        cin>>x;
        mp[x]++;         // O(log n) for each insertion
    }

    for(auto i:mp)
    {
       cout<<i.first<<" : "<<i.second<<endl;
    }
}

// complexity: O(n log n)
