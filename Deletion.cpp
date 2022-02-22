#include<bits/stdc++.h>
using namespace std;
int Deletion(int arr[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
      if(arr[i]==x)
      break;
    }
    if(i==n)return n;// when element is not present in the array
    for(int j=i;j<n;j++)
    {
        arr[j]=arr[j+1];
    }
    return n-1;
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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int m=Deletion(arr,n,12);
    Display(arr,m);
}