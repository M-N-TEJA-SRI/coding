// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
int main() {
    int n,i,maxi=INT_MIN,sec=INT_MIN;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>maxi){
            if(maxi>sec)
            sec=maxi;
            maxi=a[i];
        }
        else if(a[i]>sec&&a[i]!=maxi)
        sec=a[i];
    }
    if(sec==INT_MIN)
    sec=-1;
    cout<<sec;
    return 0;
}
/*
output
5
9 0 8 4 2
8
*/
