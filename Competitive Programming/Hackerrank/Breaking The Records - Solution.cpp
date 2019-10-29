#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* PROBLEM LINK: https://www.hackerrank.com/challenges/breaking-best-and-worst-records */

int main()
{
    int n,i,j,k,c1=0,c2=0;
    unsigned long int a,max=0,min=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(i==0)
        {
            max=a;
            min=a;
        }
        else
        {
            if(a>max)
            {
                max=a;
                c1++;
            }
            if(a<min)
            {
                min=a;
                c2++;
            }
        }
    }
    cout<<c1<<" "<<c2;
    return 0;
}
