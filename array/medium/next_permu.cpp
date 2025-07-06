// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
   int n,i;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++){
       cin>>a[i];
   }
 next_permutation(a,a+n);
 for(i=0;i<n;i++){
     cout<<a[i]<<" ";
 }
    return 0;
}
/*
output
3
1 2 3
1 3 2
*/
