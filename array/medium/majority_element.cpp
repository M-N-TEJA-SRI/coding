// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main() {
   int n,i;
   cin>>n;
   int a[n];
   unordered_map<int,int>mp;
   vector<int>v;
   for(i=0;i<n;i++){
       cin>>a[i];
       mp[a[i]]++;
   }
   for(auto it:mp){
       if(it.second*2>n)
       v.push_back(it.first);
   }
for(auto it:v){
    cout<<it<<" ";
}
    return 0;
}
/*
output
5
0 2 0 1 0
0 
*/
