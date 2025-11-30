#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    int res = 1;

    while(b>0)
    {
        if(b%2 == 1)
            res = res * a;

        a = a*a;
        b = b/2;
    }
    cout<<res;
}

// complexity:  // O(log2^b)

