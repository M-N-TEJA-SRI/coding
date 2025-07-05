// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isprime(int n){
    int i;
    for(i=2;i*i<=n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main() {
  int a;
  cin>>a;
 cout<<isprime(a);
    return 0;
}
/*
output
6
0
*/
