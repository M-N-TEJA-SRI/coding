// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void divisors(int n,vector<int>&v){
    int i;
    for(i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if(n/i!=i)
            v.push_back(n/i);
        }
    }
}
int main() {
  int a;
  cin>>a;
  vector<int>v;
  divisors(a,v);
  sort(v.begin(),v.end());
  for(auto it:v){
      cout<<it<<" ";
  }
    return 0;
}
/*
output
5
1 5 
*/
