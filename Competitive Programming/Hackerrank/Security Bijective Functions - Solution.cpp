#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* PROBLEM LINK: https://www.hackerrank.com/challenges/security-bijective-functions */

int main()
{
    int n,a[25],i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(i==n-1)
        {
            cout<<"YES";
            break;
        }
        if(a[i]==a[i+1])
        {
            cout<<"NO";
            break;
        }
    }
    return 0;
}
