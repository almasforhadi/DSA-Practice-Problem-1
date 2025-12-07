#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
       cin>>v[i];
    }
    sort(v.begin(),v.end());
    do
    {
       for(auto i:v)
       {
          cout<<i<<" ";
       }
       cout<<endl;
    }while(next_permutation(v.begin(),v.end()));

}
