// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int main() {
   int n,i,sum=0,maxi=INT_MIN;
   cin>>n;
   int a[n];
   vector<int>v;
   for(i=0;i<n;i++){
       cin>>a[i];
      sum+=a[i];
      maxi=max(maxi,sum);
      if(sum<0)
      sum=0;
   }
  
    cout<<maxi;

    return 0;
}
/*
output
5
-9 8 4 -5 9
16
*/
