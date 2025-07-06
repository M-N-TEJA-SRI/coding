// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main() {
   int n,i;
   cin>>n;
   int a[n];
   vector<int>v;
   unordered_map<int,int>mp;
   for(i=0;i<n;i++){
       cin>>a[i];
       mp[a[i]]++;
   }
   for(auto it:mp){
       if(it.second*3>n)
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
9 0 9 0 9
0 9 
  */
