// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int count(vector<int>&ans,int m,int x){
    int l=0,h=m-1,mid,ind=-1;
    while(l<=h){
        mid=(l+h)/2;
        if(ans[mid]>=x){
            ind=mid;
            h=mid-1;
        }
        else
        l=mid+1;
    }
    if(ind==-1)
    ind=m;
    return ind;
}
int main() {
    int n,m,i,j,c,maxi=0,row=-1;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    
    for(i=0;i<n;i++){
        vector<int>ans;
        for(j=0;j<m;j++){
            cin>>v[i][j];
            ans.push_back(v[i][j]);
        }
        c=m-count(ans,m,1);
        if(c>maxi){
            maxi=c;
            row=i;
        }
    }
    cout<<row<<" "<<maxi;

    return 0;
}
/*
output
3 
3
0 1 1
1 1 1
0 0 1
1 3
  */
