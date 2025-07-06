// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
int search(int a[],int n,int mid,int k,int m){
    int i,flo=0,c=0;
    for(i=0;i<n;i++){
        if(a[i]<=mid)
        c++;
        else{
            flo+=c/k;
            c=0;
        }
    }
    flo+=c/k;
    return flo;
}
int main() {
    // Write C++ code here
   int n,k,m;
   cin>>n>>k>>m;
   int a[n],i,l=INT_MAX,h=INT_MIN,mid,ans=-1,x;
   for(i=0;i<n;i++){
       cin>>a[i];
       l=min(l,a[i]);
       h=max(h,a[i]);
   }
   if(k*m>n)
   cout<<ans;
   else{
   while(l<=h){
       mid=(l+h)/2;
       x=search(a,n,mid,k,m);
       if(x>=m){
           ans=mid;
           h=mid-1;
       }
       else
       l=mid+1;
   }
cout<<ans;
}
    return 0;
}
/*
output
8 3 2
7 7 7 7 13 11 12 7
12
*/
