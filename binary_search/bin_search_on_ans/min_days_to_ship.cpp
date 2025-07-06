// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
int search(int a[],int n,int mid,int d){
   int i,sum=0,c=1;
   for(i=0;i<n;i++){
       if(sum+a[i]<=mid)
       sum+=a[i];
       else{
           c++;
           sum=a[i];
       }
   }
   return c;
}
int main() {
    // Write C++ code here
   int n,d;
   cin>>n>>d;
   int a[n],i,l=INT_MIN,h=0,mid,ans=-1,x;
   for(i=0;i<n;i++){
       cin>>a[i];
       l=max(l,a[i]);
       h+=a[i];
   }
   while(l<=h){
       mid=(l+h)/2;
       x=search(a,n,mid,d);
       if(x>d)
       l=mid+1;
       else
       {
           ans=mid;
           h=mid-1;
       }
   }
cout<<ans;

    return 0;
}
/*
output
8 5
5 4 5 2 3 4 5 6
9
*/
