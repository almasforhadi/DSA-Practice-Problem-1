#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int>v(n);       // vector is a dynamic array.

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int mx = *max_element(v.begin(),v.end());     // O(n)
    vector<int>res(mx+1);                        // O(mx)

    for(int i=0;i<n;i++)
    {
       res[v[i]]++;
    }

    for(int i=0;i<res.size();i++)
    {
        if(res[i]>0)
            cout<<i<<" : "<<res[i]<<endl;
    }
}

// complexity:  // O(n + mx)
