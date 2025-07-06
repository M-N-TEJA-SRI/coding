// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
   int n,i,tar,j,sum,flag=0;
   cin>>n>>tar;
   int a[n];
   for(i=0;i<n;i++){
       cin>>a[i];
   }
 i=0,j=n-1;
 while(i<j){
     sum=a[i]+a[j];
     if(sum==tar)
     {
         cout<<a[i]<<" "<<a[j];
         flag=1;
         break;
     }
     else if(sum>tar)
     j--;
     else
     i++;
 }
 if(flag==0)
 cout<<-1<<" "<<-1;
    return 0;
}
/*
output
5 9
1 2 4 5 9
4 5
  */
