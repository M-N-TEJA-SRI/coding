// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subset(int a[],int n,int i,vector<int>&v,vector<vector<int>>&ans){
    if(i>=n){
       ans.push_back(v);
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
vector<vector<int>>ans;
vector<int>v;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
i=0;
subset(a,n,i,v,ans);
sort(ans.begin(),ans.end());
for(i=0;i<ans.size();i++){
    cout<<"[";
    for(auto it:ans[i]){
        cout<<it<<" ";
    }
    cout<<"]\n";
}
    return 0;
}
/*
output
3 
1 2 3
[]
[1 ]
[1 2 ]
[1 2 3 ]
[1 3 ]
[2 ]
[2 3 ]
[3 ]
*/
