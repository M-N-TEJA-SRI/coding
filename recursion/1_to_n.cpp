// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void name(int n){
    if(n>0){
       
        name(n-1);
         cout<<n<<"\n";
    }
}
int main() {
int n;
cin>>n;
name(n);
    return 0;
}
/*
output
5
1
2
3
4
5
*/
