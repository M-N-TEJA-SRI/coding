// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int fib(int n){
    if(n==0||n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2);
} 
int main() {
int n;
cin>>n;
cout<<fib(n-1);
    return 0;
}
/*
output
3
2
*/
