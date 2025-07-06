// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
   int n,i;
   cin>>n;
   int a[n],b[3]={0};
   for(i=0;i<n;i++){
       cin>>a[i];
       b[a[i]]++;
   }
   for(i=0;i<3;i++){
       while(b[i]--){
           cout<<i<<" ";
       }
   }

    return 0;
}
/*
output
5
0 2 0 1 0
0 0 0 1 2
*/
