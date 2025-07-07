#include <iostream>
#include <algorithm>
using namespace std;

int main() {
 int n,i;
 cin>>n;
 string s[n];
 for(i=0;i<n;i++){
     cin>>s[i];
 }
 sort(s,s+n);
 string x=s[0],y=s[n-1],ans="";
 for(i=0;i<x.length();i++){
     if(x[i]==y[i])
     ans+=x[i];
     else
     break;
 }
 cout<<ans;
    return 0;
}
/*
output
4
flow
flowe
flower
flood
flo
*/
