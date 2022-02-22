#include<bits/stdc++.h>
using namespace std;

int Islargest1(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        res=max(res,arr[i]);
    }
    return res;
}
int Islargest(int arr[],int n)
{
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[res])
        {
            res=i;
        }
    }
    return arr[res];
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<Islargest(arr,n)<<endl;
    cout<<Islargest1(arr,n);
}