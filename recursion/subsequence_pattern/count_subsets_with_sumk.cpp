// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int subset(int a[],int n,int i,int sum,int k){
    if(i>=n){
        return sum==k;
    }
    return subset(a,n,i+1,sum+a[i],k)+subset(a,n,i+1,sum,k);
}
int main() {
int n,k,i,sum=0;
cin>>n>>k;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
i=0;
cout<<subset(a,n,i,sum,k);
    return 0;
}
/*
output
5 6
0 1 2 3 4
4
  */
