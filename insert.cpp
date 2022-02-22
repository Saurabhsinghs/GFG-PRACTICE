#include<bits/stdc++.h>
using namespace std;
int Insert(int arr[],int n,int pos,int x,int m)
{
    if(n==m)return m;
    int index=pos-1;
    for(int i=n-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=x;
    return m+1;
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
    int n,m;
    cout<<"Enter a size of Array"<<endl;
    cin>>n;
    cout<<"How many no you want to insert in array"<<endl;
    cin>>m;
    int arr[n];
    cout<<"enter a Element"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Insertion"<<endl;
    Display(arr,m);
   int new_size= Insert(arr,n,4,60,m);
    cout<<"\n"<<"After Insertion"<<endl;;
    Display(arr,new_size);
}