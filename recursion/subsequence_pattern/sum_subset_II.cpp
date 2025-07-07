// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
void subset(int a[],int n,int i,vector<int>&v,set<vector<int>>&ans){
    if(i>=n){
       ans.insert(v);
       return;
    }
    v.push_back(a[i]);
    subset(a,n,i+1,v,ans);
    v.pop_back();
    subset(a,n,i+1,v,ans);
}
int main() {
int n,i;
cin>>n;
set<vector<int>>ans;
vector<int>v;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
i=0;
subset(a,n,i,v,ans);
for(auto it:ans){
    cout<<"[";
    for(auto i:it){
        cout<<i<<" ";
    }
    cout<<"]\n";
}
    return 0;
}
/*
changes made from sum of subsets I is it wants unique elements so instead of storing in vector store it in a set 
as set has no indexing use lambda function to print it 
output
3
1 2 2
[]
[1 ]
[1 2 ]
[1 2 2 ]
[2 ]
[2 2 ]
*/
