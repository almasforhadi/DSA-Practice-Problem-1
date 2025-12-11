#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0;i<n;i++)
    {
       cin>>v[i];
    }
    stack<int>stk;
    vector<int>res;
    stk.push(n-1);

    for(int i=n-1;i>=0;i--)
    {
        while(!stk.empty() && v[i]>=v[stk.top()])
        {
            stk.pop();
        }
        if(!stk.empty())
        {
            res.push_back(v[stk.top()]);
        }
        else
        {
            res.push_back(-1);
        }
        stk.push(i);
    }
    reverse(res.begin(),res.end());

    for(auto i:res)
        cout<<i<<" ";
}

// Complexity : O(n+n) = O(n)
