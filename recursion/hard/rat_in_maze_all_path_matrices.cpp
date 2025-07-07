#include <iostream>
#include <vector>
using namespace std;

void print(const vector<vector<int>>& v, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << (v[i][j] == 2 ? 1 : 0) << " ";
        }
        cout << "\n";
    }
    cout << "\n";  // Separate different paths by an empty line
}

void search(vector<vector<int>>& v, int i, int j, int n, int m) {
    if (i < 0 || j < 0 || i >= n || j >= m || v[i][j] == 0 || v[i][j] == 2)
        return;

    if (i == n - 1 && j == m - 1) {
        v[i][j] = 2;      // Mark destination as visited
        print(v, n, m);   // Print the current path
        v[i][j] = 1;      // Backtrack
        return;
    }

    v[i][j] = 2;          // Mark current cell as visited

    search(v, i - 1, j, n, m);
    search(v, i + 1, j, n, m);
    search(v, i, j - 1, n, m);
    search(v, i, j + 1, n, m);

    v[i][j] = 1;          // Backtrack
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    if (v[0][0] == 1) {
        search(v, 0, 0, n, m);
    }

    return 0;
}
/*
output
2 2
1 0 
1 1
1 0
1 1
*/
