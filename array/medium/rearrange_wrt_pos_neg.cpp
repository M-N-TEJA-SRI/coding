// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int main() {
   int n,i,j;
   vector<int>pos,neg,ans;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++){
       cin>>a[i];
       if(a[i]>=0)
       pos.push_back(a[i]);
       else
       neg.push_back(a[i]);
   }
  i=0,j=0;
  while(i<pos.size()&&j<neg.size()){
      ans.push_back(pos[i++]);
      ans.push_back(neg[j++]);
  }
while(i<pos.size()){
    ans.push_back(pos[i++]);
}
while(j<neg.size()){
    ans.push_back(neg[j++]);
}
for(auto it:ans){
    cout<<it<<" ";
}
    return 0;
}
/*
output
5
1 -9 -4 8 6
1 -9 8 -4 6 
*/
