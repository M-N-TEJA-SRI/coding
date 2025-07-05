// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
int main() {
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    j=0;
   for(i=1;i<n;i++){
      if(a[i]!=a[j])
      swap(a[++j],a[i]);
   }
  cout<<j+1;
    return 0;
}
/*
output
5
1 1 2 2 2
2
*/
