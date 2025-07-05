// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void name(int n){
    if(n>0){
        cout<<n<<"\n";
        name(n-1);
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
5
4
3
2
1
*/
