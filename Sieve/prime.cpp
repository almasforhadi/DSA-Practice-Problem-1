#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n,true);
    v[0] = false;
    v[1] = false;

    for(int i=2; i<=sqrt(n); i++)
    {
        if(v[i] == true)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                v[j] = false;
            }
        }
    }
    for(int i=0; i<=n; i++)
    {
        if(v[i]==true)
            cout<<i<<" ";
    }
}
