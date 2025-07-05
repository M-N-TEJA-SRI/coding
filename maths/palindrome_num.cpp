// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
bool palindrome(int n){
    int sum=0,temp=n;
    while(n){
        sum=sum*10+(n%10);
        n/=10;
    }
    return sum==temp;
}
int main() {
  int n;
  cin>>n;
 cout<<palindrome(n);
    return 0;
}
/*
output
222
1
*/
