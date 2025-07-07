#include <iostream>
#include <vector>
using namespace std;
bool rotation(string s,string t){
    if(s.length()!=t.length())
    return false;
    else{
        s+=t;
        return s.find(t)!=string::npos;
    }
}
int main() {
string s,t;
cin>>s>>t;
cout<<rotation(s,t);
    return 0;
}
/*
output
abc
bca
1
*/
