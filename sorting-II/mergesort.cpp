// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void merge(int a[],int l,int mid,int h){
    int b[l+h-1],i=l,j=mid+1,k=l;
    while(i<=mid&&j<=h){
        if(a[i]<a[j])
        b[k++]=a[i++];
        else
        b[k++]=a[j++];
    }
    while(i<=mid){
        b[k++]=a[i++];
    }
    while(j<=h){
        b[k++]=a[j++];
    }
    for(i=l;i<=h;i++){
        a[i]=b[i];
    }
}
void mergesort(int a[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}
int main() {
    int n,i;
    cin>>n;
    int a[n],j,mini;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    mergesort(a,0,n-1);
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
