// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
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
       else if(a[mid]>key)
       h=mid-1;
       else
       l=mid+1;
   }
   cout<<ans;
    return 0;
}
/*
output
5 7
0 5 6 7 29
3
*/
