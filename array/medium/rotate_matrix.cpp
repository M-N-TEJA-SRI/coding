#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, i, j;
    cin >> n >> m;
    int a[n][m], b[m][n];

    // Input and transpose
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> a[i][j];
            b[j][i] = a[i][j];  // Transpose
        }
    }

    // Reverse each row of b to rotate 90 degrees clockwise
    for (i = 0; i < m; i++) {
        int l = 0, r = n - 1;
        while (l < r) {
            swap(b[i][l], b[i][r]);
            l++;
            r--;
        }
    }

    // Output the rotated matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
/*
output
3 3
1 2 3
4 5 6
7 8 9
7 4 1 
8 5 2 
9 6 3
*/
