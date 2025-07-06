// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int n,m,i,j,tot,ind1=-1,ind2=-1,num1=-1,num2=-1,c=0;
  cin>>n>>m;
  int a[n],b[m];
  for(i=0;i<n;i++){
      cin>>a[i];
  }
  for(j=0;j<m;j++){
      cin>>b[j];
  }
  tot=(n+m);
  ind2=tot/2;
  ind1=ind2-1;
  i=0,j=0;
  while(i<n&&j<m){
      if(a[i]<b[j]){
          if(c==ind1)
          num1=a[i];
          if(c==ind2)
          num2=a[i];
          i++;
          c++;
      }
      else{
          if(c==ind1)
          num1=b[j];
          if(c==ind2)
          num2=b[j];
          j++;
          c++;
      }
  }
  while(i<n){
      if(c==ind1)
          num1=a[i];
          if(c==ind2)
          num2=a[i];
          i++;
          c++;
  }
  while(j<m){
      if(c==ind1)
          num1=b[j];
          if(c==ind2)
          num2=b[j];
          j++;
          c++;
  }
  if(tot%2==1)
  cout<<num2;
  else
  cout<<(num1+num2)/2;
    return 0;
}
/*
output
4 5
2 3 7 9
0 3 4 5 8
4
*/
