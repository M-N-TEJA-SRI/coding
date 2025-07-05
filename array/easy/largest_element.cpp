// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
int main() {
    int n,i,maxi=INT_MIN;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        maxi=max(maxi,a[i]);
    }
    cout<<maxi;
    return 0;
}
/*
output
5
9 0 8 4 2
9
  */
