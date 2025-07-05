// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
bool armstrong(int n){
    int temp=n,sum=0,len=log10(n)+1;
    while(n){
        sum+=pow(n%10,len);
        n/=10;
    }
    return sum==temp;
}
int main() {
  int a;
  cin>>a;
  cout<<armstrong(a);
    return 0;
}
/*
output
153
1
*/
