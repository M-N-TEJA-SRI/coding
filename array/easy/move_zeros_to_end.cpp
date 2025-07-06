// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
   int n;
   cin>>n;
   int a[n],i,j;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   for(i=0;i<n;i++){
       if(a[i]==0)
       break;
   }
   for(j=i+1;j<n;j++){
       if(a[i]!=a[j])
       swap(a[i++],a[j]);
   }
   for(i=0;i<n;i++){
       cout<<a[i]<<" ";
   }

    return 0;
}
/*
output
5 
9 0 8 4 2
9 8 4 2 0 
*/
