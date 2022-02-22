#include<bits/stdc++.h>
using namespace std;
int RemoveDup(int arr[],int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[res-1]!=arr[i])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
    
}
void Display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={10,10,10,20,20,30,40,40,50,50};
    int m=RemoveDup(arr,10);
    Display(arr, m);
}