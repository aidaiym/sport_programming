#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 100;
int N, M;
int C[MAXN + 1][MAXN + 1];
int f[MAXN + 1][2];

int main() {
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> C[i][j];
        }
    }

    for (int i = 1; i <= N; i++) {
        // 1 - 4
        f[i][0] = max(f[i-1][0], f[i-1][1]); // f[1][0] = 
        f[i][1] = f[i-1][0] + C[i][1];

        for (int j = 2; j <= M; j++) {
            int tmp = f[i][0];
            f[i][0] = max(f[i-1][0], f[i-1][1]);
            f[i][1] = max(tmp + C[i][j], f[i-1][0] + C[i][j]);
        }
    }

    cout << max(f[N][0], f[N][1]) << endl;
    return 0;
}
