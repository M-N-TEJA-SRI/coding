// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void search(vector<vector<int>>&v,int i,int j,int n,int m,vector<string>&ans,string s){
    if(i<0||j<0||i>=n||j>=m||v[i][j]==0||v[i][j]==2)
    return ;
    if(i==n-1&&j==m-1){
      ans.push_back(s);
        return;
    }
   v[i][j]=2;
    search(v,i-1,j,n,m,ans,s+'U');
    search(v,i+1,j,n,m,ans,s+'D');
    search(v,i,j-1,n,m,ans,s+'L');
    search(v,i,j+1,n,m,ans,s+'R');
   v[i][j]=1;
   
}
int main() {
   int n,m,i,j,flag=0;
   cin>>n>>m;
vector<vector<int>>v(n,vector<int>(m));
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        cin>>v[i][j];
    }
}
vector<string>ans;
string s="";
if(v[0][0]==1){
     search(v,0,0,n,m,ans,s);
  
}
sort(ans.begin(),ans.end());
for(auto it:ans){
    cout<<it<<" ";
}


    return 0;
}
/*
output
3 3
1 1 1
1 0 1
1 1 1
DDRR RRDD 
*/
