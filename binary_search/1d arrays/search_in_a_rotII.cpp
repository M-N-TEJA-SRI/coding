// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int n,i,key;
  cin>>n>>key;
  int a[n];
  for(i=0;i<n;i++){
      cin>>a[i];
  }
  int l=0,h=n-1,mid,ans=-1;
  while(l<=h){
      mid=(l+h)/2;
      if(a[mid]==key){
          ans=mid;
          break;
      }
      if(a[l]==a[mid]&&a[mid]==a[h]){
          l++;
          h--;
          continue;
      }
      else if(a[l]<=a[mid]){
          if(a[l]<=key&&key<=a[mid])
          h=mid-1;
          else
          l=mid+1;
      }
      else{
          if(a[mid]<=key&&key<=a[h])
          l=mid+1;
          else
          h=mid-1;
      }
  }
  cout<<ans;
    return 0;
}
/*
output
5 3
4 5 1 3 4
3
*/
