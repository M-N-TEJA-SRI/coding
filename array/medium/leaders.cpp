// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main() {
   int n,i;
   cin>>n;
   int a[n],maxi=INT_MIN;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   vector<int>v;
 for(i=n-1;i>=0;i--){
     if(a[i]>maxi){
         maxi=a[i];
         v.push_back(maxi);
     }
 }
 reverse(v.begin(),v.end());
 for(auto it:v){
     cout<<it<<" ";
 }
    return 0;
}
/*
output
5
1 9 5 6 3
9 6 3
*/
