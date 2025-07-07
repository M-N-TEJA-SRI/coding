// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n,m,i,j,key,row,col,l,h,mid,flag=0;
    cin>>n>>m>>key;
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    l=0,h=(n*m)-1;
    while(l<=h){
        mid=(l+h)/2;
        row=mid/m;
        col=mid%m;
        if(a[row][col]==key){
            flag=1;
            break;
        }
        else if(a[row][col]>key)
        h=mid-1;
        else
        l=mid+1;
    }
    cout<<flag;

    return 0;
}
/*
output
3 3 5
1 2 3
4 5 6
7 8 9
1
*/
