#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i=1,j=0;
  int arr[] = {1,4,6,2,5};
  for( i=1;i<=6;i++)
    {
    for( j=0; j<5;j++)
      {
        if(i==arr[j])
          break;
      }
      if(j==5)
      {
        cout<<i;
      }
    }
}