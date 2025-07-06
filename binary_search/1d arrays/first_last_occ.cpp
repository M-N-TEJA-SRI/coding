#include <iostream>
#include<climits>
using namespace std;
int lower(int a[],int n,int key){
    int l=0,h=n-1,mid,ans=-1;
    while(l<=h){
        mid=(l+h)/2;
        if(a[mid]>=key){
            ans=mid;
            h=mid-1;
        }
        else
        l=mid+1;
    }
    return ans;
}
int upper(int a[],int n,int key){
    int l=0,h=n-1,mid,ans=-1;
    while(l<=h){
        mid=(l+h)/2;
        if(a[mid]>key){
            ans=mid;
            h=mid-1;
        }
        else
        l=mid+1;
    }
    if(ans!=-1)
    {
        if(a[ans-1]==key)
        ans-=1;
    }
    return ans;
}
int main() {
   int n,i,key,last;
   cin>>n>>key;
   int a[n];
   for(i=0;i<n;i++){
       cin>>a[i];
   }
int f=lower(a,n,key);
if(f==-1)
last=-1;
else
last=upper(a,n,key);
cout<<f<<" "<<last;
    return 0;
}
