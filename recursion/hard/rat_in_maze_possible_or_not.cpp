// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
bool search(vector<vector<int>>&v,int i,int j,int n,int m){
    if(i<0||j<0||i>=n||j>=m||v[i][j]==0||v[i][j]==2)
    return false;
    if(i==n-1&&j==m-1)
    return true;
    v[i][j]=2;
    bool ans= search(v,i-1,j,n,m)||search(v,i+1,j,n,m)||search(v,i,j-1,n,m)||search(v,i,j+1,n,m);
    v[i][j]=1;
    return ans;
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
if(v[0][0]==1){
    if(search(v,0,0,n,m)==true)
    flag=1;
}
cout<<flag;

    return 0;
}
/*
output
3 3
1 0 1 
1 1 0
0 1 1
1
*/
