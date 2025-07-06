// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   int n,l,h,mid,ans=-1;
   cin>>n;
   l=1,h=n;
   while(l<=h){
       mid=(l+h)/2;
       if(mid*mid>n){
           h=mid-1;
       }
       else{
           ans=mid;
           l=mid+1;
       }
   }
   cout<<ans;

    return 0;
}
/*
output
16
4
*/
