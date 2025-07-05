// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
int main() {
    int n,i,flag=1;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
   for(i=1;i<n;i++){
       if(a[i]<a[i-1]){
           flag=0;
           break;
       }
   }
   cout<<flag;
    return 0;
}
/*
output
/*
5
9 0 8 4 2
0
*/
