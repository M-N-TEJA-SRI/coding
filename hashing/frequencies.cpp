// Online C++ compiler to run C++ program online
#include <iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main() {
int n;
cin>>n;
int a[n],i;
unordered_map<int,int>mp;
for(i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
}
for(auto it:mp){
    cout<<it.first<<" "<<it.second<<"\n";
}
    return 0;
}
/*
output
5
9 0 9 0 7
7 1
0 2
9 2
  */
