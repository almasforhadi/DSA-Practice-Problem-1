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
    set<int>s;
    for(int i=0;i<n;i++)
    {
       s.insert(v[i]);
    }
    v.clear();
    int mx = 0, cnt = 0;
    for(auto i:s)
    {
       v.push_back(i);
    }
     for(int i=1;i<n;i++)
    {
       if((v[i-1]+1) == v[i])
       {
           cnt++;
       }
       else
       {
           mx = max(cnt,mx);
           cnt = 0;
       }
    }
    if(mx!=0) cout<<mx+1;
    else      cout<<0;
}
