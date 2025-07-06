// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
int search(int a[],int n,int mid){
    int i,sum=0;
    for(i=0;i<n;i++){
        sum+=a[i]/mid;
        if(a[i]%mid!=0)
        sum+=1;
    }
    return sum;
}
int main() {
    // Write C++ code here
   int n,k;
   cin>>n>>k;
   int a[n],i,l,h=INT_MIN,mid,ans=-1,x;
   for(i=0;i<n;i++){
       cin>>a[i];
       h=max(h,a[i]);
   }
   l=1;
   while(l<=h){
       mid=(l+h)/2;
       x=search(a,n,mid);
       if(x<=k){
           ans=mid;
           h=mid-1;
       }
       else
       l=mid+1;
   }
cout<<ans;
    return 0;
}
/*
output
4 8
3 6 7 11
4
*/
