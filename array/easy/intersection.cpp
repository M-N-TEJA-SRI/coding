// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
   int n,m,i,j;
   cin>>n>>m;
   int a[n],b[m];
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   for(i=0;i<m;i++){
       cin>>b[i];
   }
   i=0,j=0;
   vector<int>v;
   while(i<n&&j<m){
       if(a[i]<b[j])
      i++;
      else if(b[j]<a[i])
      j++;
       else{
          
           v.push_back(b[j++]);
           i++;
       }
   }
  
   for(auto it:v){
       cout<<it<<" ";
   }
    return 0;
}
/*
output
5 3
0 6 7 8 9
4 5 6
6 
*/
