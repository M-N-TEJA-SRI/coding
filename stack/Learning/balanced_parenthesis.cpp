// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
using namespace std;
bool bal_par(string s){
    int i;
    stack<char>st;
    for(i=0;i<s.length();i++){
        if(st.empty())
        st.push(s[i]);
        else if((s[i]==')'&&st.top()=='(')||(s[i]==']'&&st.top()=='[')||(s[i]=='}'&&st.top()=='{'))
        st.pop();
        else
        st.push(s[i]);
    }
    return st.empty();
}
int main() {
  string s;
  cin>>s;
  cout<<bal_par(s);
    return 0;
}
/*
output
([{}])
1
*/
