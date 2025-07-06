#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, i, j,left,right,top,down;
    cin >> n >> m;
    int a[n][m];

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
       vector<int>v;
left=0,right=m-1,top=0,down=n-1;
while(left<=right&&top<=down){
    for(i=left;i<=right;i++){
        v.push_back(a[top][i]);
    }
    top++;
    for(i=top;i<=down;i++){
        v.push_back(a[i][right]);
    }
    right--;
    if(top<=down){
    for(i=right;i>=left;i--){
        v.push_back(a[down][i]);
    }
    down--;
    }
    if(left<=right){
    for(i=down;i>=top;i--){
        v.push_back(a[i][left]);
    }
    left++;
    }
}

   for(auto it:v){
       cout<<it<<" ";
   }
    return 0;
}
/*
output
3 3
1 2 3
4 5 6
7 8 9
1 2 3 6 9 8 7 4 5
*/
