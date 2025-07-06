// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
   int n,m,i,j;
   cin>>n>>m;
   int a[n],b[m];
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   for(i=0;i<m;i++){
       cin>>b[i];
   }
   i=n-1,j=0;
   while(i>=0&&j<m){
       if(a[i]>b[j])
       swap(a[i--],b[j++]);
       else
       break;
   }
   sort(a,a+n);
   sort(b,b+m);
   for(i=0;i<n;i++){
       cout<<a[i]<<" ";
   }
   cout<<"\n";
   for(i=0;i<m;i++){
       cout<<b[i]<<" ";
   }
cout<<"\n";
    return 0;
}
/*
output
5 3
1 4 5 9 18
0 3 4
0 1 3 4 4 
5 9 18 
*/
