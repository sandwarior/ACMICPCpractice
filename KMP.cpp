
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAX 100001
int main()
{
    string a,b;
    cin>>a>>b;
    int arr[MAX]={0},len,len1;
    len=b.length();
    len1=a.length();
    arr[0]=0;
    for(int j=0,i=1;i<len;i++)
    {
        if(b[i]==b[j])
        {
            arr[i]=j+1;
            j++;
        }
        else
        {
            if(j==0)
            {
                arr[i]=arr[j];
            }
            else{
                i--;
                j=arr[j-1];
            }
        }
       // cout<<i<<" "<<j<<endl;
    }
    cout<<"longest prefix suffix array:--->"<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int j=0;
    for(int i=0;i<len1;i++)
    {
        if(a[i]==b[j])
        {
            j++;
        }
        else
        {
            if(j!=0)
            {
                i--;
               j=arr[j-1];
            }

        }
    }
    if(j==len)
    cout<<"yes";
    else
    cout<<"no";
}
