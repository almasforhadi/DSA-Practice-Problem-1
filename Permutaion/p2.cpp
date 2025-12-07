#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());

    do
    {
       for(auto i:s)
       {
          cout<<i<<" ";
       }
       cout<<endl;
    }while(next_permutation(s.begin(),s.end()));

}
