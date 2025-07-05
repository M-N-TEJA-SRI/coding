// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    int a[n],j,mini;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        mini=i;
        for(j=i+1;j<n;j++){
            if(a[mini]>a[j])
            mini=j;
        }
        if(mini!=i)
        swap(a[i],a[mini]);
    }
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
