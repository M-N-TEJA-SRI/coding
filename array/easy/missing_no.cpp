// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
   int n,i,xori=0,indi=0;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++){
       cin>>a[i];
       xori^=a[i];
       indi^=i+1;
   }
   indi^=i+1;
   xori^=indi;
   cout<<xori;
    return 0;
}
/*
output
4
1 2 3 5
4
*/
