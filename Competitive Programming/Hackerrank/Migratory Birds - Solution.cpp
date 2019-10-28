#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


/* PROBLEM LINK: https://www.hackerrank.com/challenges/migratory-birds */

int main()
{
    unsigned long int n,i;
    int a[6]={0},t;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>t;
        if(t==1)
        {
            a[1]=a[1]+1;
        }
        else if(t==2)
        {
            a[2]=a[2]+1;
        }
        else if(t==3)
        {
            a[3]=a[3]+1;
        }
        else if(t==4)
        {
            a[4]=a[4]+1;
        }
        else if(t==5)
        {
            a[5]=a[5]+1;
        }
    }
    int max=0,j;
    for(i=5;i>=1;i--)
    {
        if(a[i]>=max)
        {
            max=a[i];
            j=i;
        }
    }
    cout<<j;
    return 0;
}
