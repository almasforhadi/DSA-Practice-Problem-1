#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int k=0,sum=0;

    while(n>0)
    {
        int rem = n%10;
        sum += (rem * pow(2,k));
        k++;
        n /= 10;
    }
    cout<<"Decimal to Binary : "<<sum;
}

// Time: O(log n)
// Space: O(1)
