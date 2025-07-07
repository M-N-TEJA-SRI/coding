#include <iostream>
#include <unordered_map>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(pair<char,int>&r1,pair<char,int>&r2){
    if(r1.second>r2.second)
    return true;
    else {
        if(r1.first>r2.first)
        return true;
    }
    return false;
}
int main() {
string s;
cin>>s;
unordered_map<char,int>mp;
int i;
for(i=0;i<s.length();i++){
    mp[s[i]]++;
}
vector<pair<char,int>>v;
for(auto it:mp){
    v.push_back({it.first,it.second});
}
sort(v.begin(),v.end(),cmp);
for(auto it:v){
    cout<<it.first<<" "<<it.second<<"\n";
}
    return 0;
}
/*
output
akulaki
k 2
a 2
u 1
l 1
i 1
*/
