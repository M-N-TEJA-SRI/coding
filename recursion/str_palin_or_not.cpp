// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool reverse(string s,int i,int j){
    if(i<j){
       if(s[i]!=s[j])
       return false;
        reverse(s,i+1,j-1);
    }
    return true;
}
int main() {
string s;
cin>>s;
cout<<reverse(s,0,s.length()-1);
    return 0;
}
/*
output
teja
0
*/
