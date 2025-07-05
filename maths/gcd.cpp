// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
int gcd(int a,int b){
    if(a==0)
    return b;
    else if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int main() {
  int a,b;
  cin>>a>>b;
  cout<<gcd(a,b);
    return 0;
}
/*
output
3 6
3
*/
