// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subset(int a[],int n,int i,int sum,vector<int>&v){
    if(i>=n){
       v.push_back(sum);
       return;
    }
    subset(a,n,i+1,sum+a[i],v);
    subset(a,n,i+1,sum,v);
}
int main() {
int n,i,sum=0;
cin>>n;
vector<int>v;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
i=0;
subset(a,n,i,sum,v);
sort(v.begin(),v.end());
for(auto it:v){
    cout<<it<<" ";
}
    return 0;
}
/*
output
3 
1 2 3
0 1 2 3 3 4 5 6 
*/
