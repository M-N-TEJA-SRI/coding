// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main() {
   int n,i,j,k,sum,tar;
   cin>>n>>tar;
   int a[n],l;
   vector<vector<int>>v;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   for(i=0;i<n-2;i++){
       for(l=i+1;l<n-1;l++){
       j=l+1,k=n-1;
       while(j<k){
           sum=a[i]+a[j]+a[k]+a[l];
           if(sum==tar){
               v.push_back({a[i],a[l],a[j],a[k]});
               j++;
               k--;
           }
           else if(sum>tar)
           k--;
           else
           j++;
       }
       }
   }
   for(auto it:v){
       cout<<it[0]<<" "<<it[1]<<" "<<it[2]<<" "<<it[3]<<"\n";
   }
    return 0;
}
/*
output
5 7
1 1 2 3 4 
1 1 2 3
*/
