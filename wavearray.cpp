#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={2,4,6,8,9,10};
  for(int i=0; i<5; i+=2)
    {
      swap(arr[i],arr[i+1]);
    }
}