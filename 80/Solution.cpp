c++
#include <iostream>
#include <vector>

using namespace std;

void find_position(int L, int W, vector<vector<int>>& A, int H) {
    int i = 0, j = 0;
    for (i = 0; i < L; i++) {
        for (j = 0; j < W; j++) {
            if (A[i][j] < H) {
                break;
            }
        }
        if (j < W) {
            break;
        }
    }
    cout << i + 1 << " " << j + 1 << endl;
}

int main() {
    int L, W, H;
    cin >> L >> W;
    vector<vector<int>> A(L, vector<int>(W));
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }
    cin >> H;
    find_position(L, W, A, H);
    return 0;
}