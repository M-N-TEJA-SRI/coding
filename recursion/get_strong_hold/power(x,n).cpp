// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
long long int power(int x,int n){
    int m=abs(n);
    long long int pro=1;
    while(m){
        if(m%2==1){
            pro*=x;
            m--;
        }
        else{
            pro*=pro;
            m/=2;
        }
    }
    if(n<0)
    return 1.0/pro;
    else
    return pro;
}
int main() {
int x,n;
cin>>x>>n;
cout<<power(x,n);
    return 0;
}
/*
output
2 3
8
  */
