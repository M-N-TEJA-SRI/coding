// Online C++ compiler to run C++ program online
#include <iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main() {
int n;
cin>>n;
int a[n],i,maxfreq=0,minfreq=9999,maxnum=-1,minnum=-1;
unordered_map<int,int>mp;
for(i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
}
for(auto it:mp){
 if(it.second>maxfreq){
     maxfreq=it.second;
     maxnum=it.first;
 }   
 else if(it.second==maxfreq)
 maxnum=min(maxnum,it.first);
 if(it.second<minfreq){
     minfreq=it.second;
     minnum=it.first;
 }
 else if(it.second==minfreq)
 minnum=min(minnum,it.first);
}
cout<<maxnum<<" "<<maxfreq<<"\n";
cout<<minnum<<" "<<minfreq<<"\n";
    return 0;
}
/*
output
5
9 0 9 0 7
0 2
7 1
*/
