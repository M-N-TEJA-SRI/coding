#include <iostream>
#include <vector>
using namespace std;

int main() {
string s,t;
cin>>s>>t;
vector<int>ah(256,0),bh(256,0);
int i,flag=1;
if(s.length()!=t.length())
{
    flag=0;
}
else{
for(i=0;i<s.length();i++){
    if(ah[s[i]]==0&&bh[t[i]]==0){
        ah[s[i]]=t[i];
        bh[t[i]]=s[i];
    }
    else if(ah[s[i]]!=t[i]||bh[t[i]]!=s[i]){
        flag=0;
        break;
    }
}
}
cout<<flag;
    return 0;
}
/*
output
egg
ads
0
*/
