// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
int main() {
  int n,i,mini=INT_MAX,ind=-1;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++){
      cin>>a[i];
  }
  int l=0,h=n-1,mid;
  while(l<=h){
      mid=(l+h)/2;
      if(a[l]<=a[mid]){
          if(a[l]<mini){
              mini=a[l];
              ind=l;
          }
          l=mid+1;
      }
      else{
          if(a[mid]<mini){
              mini=a[mid];
              ind=mid;
          }
          h=mid-1;
      }
  }
  cout<<ind;
    return 0;
}
/*
output
5
4 5 1 2 3
2
*/
