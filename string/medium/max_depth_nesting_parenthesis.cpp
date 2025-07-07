#include <iostream>
using namespace std;
int main() {
string s;
cin>>s;
int i,c=0,maxi=0;
for(i=0;i<s.length();i++){
    if(s[i]=='(')
    c++;
    else if(s[i]==')')
    c--;
    maxi=max(maxi,c);
}
cout<<maxi;

    return 0;
}
/*
output
(a+(b+(c*d))-d)
3
*/
