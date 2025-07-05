// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int sum(int n){
    if(n==0)
    return 0;
    else
    return n+sum(n-1);
}
int main() {
int n;
cin>>n;
cout<<sum(n);
    return 0;
}
/*
output
5
15
  */
