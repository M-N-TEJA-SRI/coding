// Online C++ compiler to run C++ program online
#include <iostream>
#include<unordered_map>
using namespace std;
 int romanToInt(string s) {
     unordered_map<char,int>mp;ac
     mp['I']=1,mp['V']=5,mp['X']=10,mp['L']=50,mp['C']=100,mp['D']=500,mp['M']=1000;
     int i,n=s.length()-1;
     int sum=mp[s[n]];
     for(i=n-1;i>=0;i--){
        if(mp[s[i]]>=mp[s[i+1]])
        sum+=mp[s[i]];
        else
        sum-=mp[s[i]];
     }   
     return sum;
    }
int main() {
string s;
cin>>s;
cout<<romanToInt(s);

    return 0;
}
/*
output
XC
90
*/
