// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
   int n,i,maxi=0,c=0;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++){
       cin>>a[i];
      if(a[i]==1)
      {
          c++;
          maxi=max(maxi,c);
      }
      else
      c=0;
   }
   maxi=max(maxi,c);
   cout<<maxi;
    return 0;
}
/*
output
5
1 1 0 1 0
2
*/
