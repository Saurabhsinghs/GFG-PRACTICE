#include<bits/stdc++.h>
using namespace std;
int SecondLargest(int arr[],int n)
{
    int first_largest=0;
    for(int i=0;i<n;i++)
    {
        first_largest=max(first_largest,arr[i]);
    }
    int res=0;
    for(int i=1;i<n;i++)
    {
         if(arr[i]!=first_largest)
         {
             if(arr[i]>arr[res])
             {
                res=i;
             }
         }
    }
    return arr[res];
}
int SecondLargest1(int arr[],int n)
{
    int first_largest=0;
    int res=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[first_largest])
        {
            res=first_largest;
            first_largest=i;
        }
        else if(arr[i]!=arr[first_largest])
        {
            if(res==-1||arr[i]>arr[res])
            {
                res=i;
            }
        }
    }
    return arr[res];
}
int main()
{
    int arr[]={10,20,30,40,50};
    cout<<SecondLargest1(arr,5);
}