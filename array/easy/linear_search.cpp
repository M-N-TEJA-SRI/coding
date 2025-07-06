// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
   int n,key,ind=-1;
   cin>>n>>key;
   int a[n],i;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   for(i=0;i<n;i++){
       if(a[i]==key){
           ind=i;
       
       break;
       }
   }
  
       cout<<ind<<" ";
   

    return 0;
}
/*
output
5 8 
9 0 8 4 2
2 
*/
