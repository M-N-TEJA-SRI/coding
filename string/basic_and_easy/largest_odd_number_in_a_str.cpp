#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   string s;
   cin>>s;
   int i;
   for(i=s.length()-1;i>=0;i--){
       if((s[i]-'0')%2==1)
       break;
   }
   cout<<s.substr(0,i+1);
    return 0;
}
/*
output
56784390
5678439
*/
