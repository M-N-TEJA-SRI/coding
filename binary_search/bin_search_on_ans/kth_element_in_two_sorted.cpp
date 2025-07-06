// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int n,m,i,j,num2=-1,c=0,k;
  cin>>n>>m>>k;
  int a[n],b[m];
  for(i=0;i<n;i++){
      cin>>a[i];
  }
  for(j=0;j<m;j++){
      cin>>b[j];
  }
  i=0,j=0;
  while(i<n&&j<m){
      if(a[i]<b[j]){
          if(c==k)
          num2=a[i];
          i++;
          c++;
      }
      else{
          if(c==k)
          num2=b[j];
          j++;
          c++;
      }
  }
  while(i<n){
          if(c==k)
          num2=a[i];
          i++;
          c++;
  }
  while(j<m){
          if(c==k)
          num2=b[j];
          j++;
          c++;
  }
  cout<<num2;
 
    return 0;
}
/*
output
4 5 2
2 3 7 9
0 3 4 5 8
3
*/
