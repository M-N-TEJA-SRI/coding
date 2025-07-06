// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
   int n,d;
   cin>>n>>d;
   d%=n;
   int a[n],i;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   reverse(a,a+d);
   reverse(a+d,a+n);
   reverse(a,a+n);
   for(i=0;i<n;i++){
       cout<<a[i]<<" ";
   }

    return 0;
}
/*
output
5 5
9 0 8 4 2
9 0 8 4 2
*/
