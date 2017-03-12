#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int cases;
    cin >> cases;
    while (cases--) {
        int r, c;
        cin >> r >> c;
        int arr[r][c];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++) cin >> arr[i][j];
        int n = min(r, c);
        int flag = 1;
        while (n > 0 && flag == 1) {
            for (int i = 0; i <= r - n; i++) {
                for (int j = 0; j <= c - n && flag == 1; j++) {
                    if (arr[i][j] == 0 || arr[i][j + n - 1] == 0 ||
                        arr[i + n - 1][j] == 0 ||
                        arr[i + n - 1][j + n - 1] == 0)
                        continue;
                    flag = 0;
                    for (int x = i; x < n + i; x++) {
                        for (int z = j; z < j + n; z++) {
                            if (arr[x][z] == 0) {
                                flag = 1;
                                break;
                            }
                        }
                    }
                    if (flag == ) {
                        cout << n << endl;
                    }
                }
            }
            n--;
            if (n == 0) cout << n << endl;
        }
    }
    return 0;
}
