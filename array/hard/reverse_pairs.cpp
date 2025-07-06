// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int n,i,j,c=0;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
 {
     cin>>a[i];
 }
 for(i=0;i<n;i++){
     for(j=i+1;j<n;j++){
         if(a[i]>2*a[j])
         c++;
     }
 }
 cout<<c;
    return 0;
}
/*
output
5
9 0 7 4 1
5
*/
