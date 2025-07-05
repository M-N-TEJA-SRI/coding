// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void bubble(int a[],int n){
    if(n==1)
    return ;
    int i;
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1])
        swap(a[i],a[i+1]);
    }
    bubble(a,n-1);
}
int main() {
    int n,i;
    cin>>n;
    int a[n],j,mini;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    bubble(a,n);
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
/*
output
5
9 0 8 4 2
0 2 4 8 9 
  */
