// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int partition(int a[],int l,int h){
    int i=l,j=h,pivot=a[l];
    while(i<j){
        while(a[i]<=pivot){
            i++;
        }
        while(pivot<a[j]){
            j--;
        }
        if(i<j)
        swap(a[i],a[j]);
    }
    swap(a[l],a[j]);
    return j;
}
void quicksort(int a[],int l,int h){
    if(l<h){
        int j=partition(a,l,h);
        quicksort(a,l,j-1);
        quicksort(a,j+1,h);
    }
}
int main() {
    int n,i;
    cin>>n;
    int a[n],j,mini;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    quicksort(a,0,n-1);
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
