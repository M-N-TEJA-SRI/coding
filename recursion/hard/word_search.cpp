#include <bits/stdc++.h>
using namespace std;
bool search(vector<vector<char>>&v,int i,int j,int n,int m,string &word,int ind){
     if(ind==word.size())
    return true;
    if(i<0||j<0||i>=n||j>=m||v[i][j]=='!'||v[i][j]!=word[ind])
    return false;
   
    char ch=v[i][j];
    v[i][j]='!';
    bool ans=search(v,i-1,j,n,m,word,ind+1)||search(v,i+1,j,n,m,word,ind+1)||search(v,i,j+1,n,m,word,ind+1)||search(v,i,j-1,n,m,word,ind+1);
    v[i][j]=ch;
    return ans;
}
int main() {
	// your code goes here
	int n,m,i,j,flag=0;
	cin>>n>>m;
	vector<vector<char>>v(n,vector<char>(m));
	for(i=0;i<n;i++)
	{
	    for(j=0;j<m;j++){
	        cin>>v[i][j];
	    }
	}
	string word;
	cin>>word;
	int ind=0;
	for(i=0;i<n;i++){
	    for(j=0;j<m;j++){
	        if(v[i][j]==word[ind]){
	            if(search(v,i,j,n,m,word,ind)==true){
	                flag=1;
	                break;
	            }
	        }
	    }
	}
	    if(flag==1)
	    cout<<"true";
	    else
	    cout<<"false";
	

}
/*
output
3 4
A B C E
S F C S
A D E E
SEE
*/
