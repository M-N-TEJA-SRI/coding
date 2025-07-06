// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
   int n,m,i,j;
   cin>>n>>m;
   int a[n][m],rowind[n]={0},colind[m]={0};
   for(i=0;i<n;i++){
       for(j=0;j<m;j++){
           cin>>a[i][j];
           if(a[i][j]==0){
               rowind[i]=1;
               colind[j]=1;
           }
       }
   }
   for(i=0;i<n;i++){
       for(j=0;j<m;j++){
           if(rowind[i]==1||colind[j]==1)
           cout<<0<<" ";
           else
           cout<<a[i][j]<<" ";
       }
       cout<<"\n";
   }
    return 0;
}
/*
output
2 3
0 1 1 
1 1 1
0 0 0 
0 1 1 
*/
