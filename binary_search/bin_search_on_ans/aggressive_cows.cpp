// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;
int search(int a[],int n,int mid,int k){
   int i,last=a[0],c=1;
   for(i=1;i<n;i++){
       if(a[i]-last>=mid){
           last=a[i];
           c++;
       }
   }
   return c;
}
int main() {
    // Write C++ code here
   int n,k;
   cin>>n>>k;
   int a[n],i,l,h,mid,ans=-1,x;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   sort(a,a+n);
   l=a[0],h=a[n-1];
   if(k==1)
   cout<<-1;
   else if(k==2)
   cout<<a[n-1]-a[0];
   else{
   while(l<=h){
       mid=(l+h)/2;
       x=search(a,n,mid,k);
      if(x<k)
      h=mid-1;
      else{
          ans=mid;
          l=mid+1;
      }
   }
cout<<ans;
}
    return 0;
}
/*
output
6 4
0 3 4 7 10 9
3
*/
