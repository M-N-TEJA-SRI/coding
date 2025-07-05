// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void name(string s,int n){
    if(n>0){
        cout<<s<<"\n";
        name(s,n-1);
    }
}
int main() {
string s;
int n;
cin>>s>>n;
name(s,n);
    return 0;
}
/*output
teja 8
teja
teja
teja
teja
teja
teja
teja
teja

*/
