// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int main() {
   int n,i,cost=0,profit=0,mini;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   mini=a[0];
   for(i=1;i<n;i++){
       cost=a[i]-mini;
       profit=max(profit,cost);
       mini=min(mini,a[i]);
   }
  
    cout<<profit;

    return 0;
}
/*
output
5
1 9 4 8 6
8
*/
