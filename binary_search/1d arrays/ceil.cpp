// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
int ceilu(int a[],int n,int key){
    int l=0,h=n-1,mid,ans=-1;
    while(l<=h){
        mid=(l+h)/2;
        if(a[mid]==key){
            ans=a[mid];
            break;
        }
        if(a[mid]>key){
            ans=a[mid];
            h=mid-1;
        }
        else
        l=mid+1;
    }
    return ans;
}
int main() {
   int n,i,key;
   cin>>n>>key;
   int a[n];
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   cout<<ceilu(a,n,key);
    return 0;
}
/*
output
5 7
0 5 6 8 29
8
*/
