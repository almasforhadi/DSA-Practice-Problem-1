
   /* set */
// remove duplicate
// doesn't access index
// sorted order (asc order)
// Search, Insert, Delete : log(n)
// balanced BST used

   /* unordered_set */
// remove duplicate
// doesn't access index
// unsorted order
// Search, Insert, Delete : O(1)
// hash table used

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    set<int>s1;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s1.insert(x);
    }

    if(s1.find(5) != s1.end())
    {
        cout<<"Item Found";
    }
    cout<<s1.count(5)<<endl;
    cout<<s1.size()<<endl;
    s1.erase(5);

    for(auto i:s1)
        cout<<i<<" ";

    s1.clear();
    cout<<s1.size();
}
