// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
int main() {
   int n,i,pre=1,suf=1,maxi=INT_MIN;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   for(i=0;i<n;i++){
       if(pre==0)
       pre=1;
       if(suf==0)
       suf=1;
       pre*=a[i];
       suf*=a[n-i-1];
       maxi=max(maxi,max(pre,suf));
   }
   cout<<maxi;
    return 0;
}/*
output
5
9 5 3 -2 3
135
*/
