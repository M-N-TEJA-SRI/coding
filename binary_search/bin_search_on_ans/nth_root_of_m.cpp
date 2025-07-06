// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int power(int n,int mid,int m){
    long long int pro=1;
    int i;
    for(i=0;i<n;i++){
        pro*=mid;
        if(pro>m)
        return 2;
    }
    return pro==m;
}
int main() {
    // Write C++ code here
   int n,m,l,h,mid,ans=-1,x;
   cin>>n>>m;
   l=1,h=n;
   while(l<=h){
       mid=(l+h)/2;
       x=power(n,mid,m);
       if(x==2)
       h=mid-1;
       else if(x==0)
       l=mid+1;
       else
       {
           ans=mid;
           break;
       }
   }
   cout<<ans;

    return 0;
}
/*
output
3 27
3
*/
