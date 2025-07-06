// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int a[n],i;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   int temp=a[0];
   for(i=1;i<n;i++){
       a[i-1]=a[i];
   }
   a[n-1]=temp;
   for(i=0;i<n;i++){
       cout<<a[i]<<" ";
   }

    return 0;
}
/*
output
5
9 0 8 4 2
0 8 4 2 9
  */
