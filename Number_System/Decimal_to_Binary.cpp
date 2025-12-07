#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int>res;

    while(n>0)
    {
        int rem = n%2;
        res.push_back(rem);
        n /= 2;
    }
    reverse(res.begin(),res.end());
    for(auto i:res)
        cout<<i;
}
// Time Complexity : O(log n)
