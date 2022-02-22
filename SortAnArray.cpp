// sort an array according to other

// a[]={1,3,5,2,4}
// b[]={'a','b','c','d','e'}
// O/P: a d b e c

#include<bits/stdc++.h>
using namespace std;
void Sortarray(int a[],char b[],int n)
{
    pair<int,char>pa[n];
    for(int i=0;i<n;i++)
    {
        pa[i]={a[i],b[i]};
    }
    sort(pa,pa+n);
    for(int i=0;i<n;i++)
    {
        cout<<pa[i].second<<" ";
    }
}
int main()
{
    int a[]={1,3,4,2,5};
    char b[]={'a','b','c','d','e'};
    Sortarray(a,b,5);
}