// Online C++ compiler to run C++ program online
#include <iostream>
#include<unordered_map>
using namespace std;
 string intToRoman(int num) {
        int n=13;
        //1000,900,500,400,100,90,50,40,10,9,5,4,1
        string s[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int val[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string ans="";
        int i;
        for(i=0;i<13;i++){
            while(num>=val[i]){
                num-=val[i];
                ans+=s[i];
            }
        }
        return ans;
    }
int main() {
int num;
cin>>num;
cout<<intToRoman(num);

    return 0;
}
/*
output
90
XC
*/
