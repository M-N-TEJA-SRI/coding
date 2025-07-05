// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reverse(int a[],int i,int j){
    if(i<j){
        swap(a[i++],a[j--]);
        reverse(a,i,j);
    }
}
int main() {
int n;
cin>>n;
int a[n],i;
for(i=0;i<n;i++){
    cin>>a[i];
}
reverse(a,0,n-1);
for(i=0;i<n;i++){
    cout<<a[i]<<" ";
}
    return 0;
}
/*
output
6
9 0 8 7 3 4
4 3 7 8 0 9
*/
