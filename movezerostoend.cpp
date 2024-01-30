#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n=5;
  int arr[]={0,2,3,4,5};
 /* for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }*/
  for(int i=0; i<n/2; i++)
    {
      if(arr[i] != 0)
      {
       // cout<<"no zeros are present";
        break;
      }
      if(arr[i]==0)
      {
        swap(arr[i],arr[n-i-1]);
      }
    }
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
}