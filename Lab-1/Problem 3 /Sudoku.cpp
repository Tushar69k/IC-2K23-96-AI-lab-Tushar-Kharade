
#include <iostream>
using namespace std;

int grid[9][9] = {
    {5, 3, 0, 0, 7, 0, 0, 0, 0},
    {6, 0, 0, 1, 9, 5, 0, 0, 0},
    {0, 9, 8, 0, 0, 0, 0, 6, 0},
    {8, 0, 0, 0, 6, 0, 0, 0, 3},
    {4, 0, 0, 8, 0, 3, 0, 0, 1},
    {7, 0, 0, 0, 2, 0, 0, 0, 6},
    {0, 6, 0, 0, 0, 0, 2, 8, 0},
    {0, 0, 0, 4, 1, 9, 0, 0, 5},
    {0, 0, 0, 0, 8, 0, 0, 7, 9}
};

bool safe(int row, int col, int num) {

    for (int i = 0; i < 9; i++) {
        if (grid[row][i] == num ||
            grid[i][col] == num)
            return false;
    }

    int startRow = (row / 3) * 3;
    int startCol = (col / 3) * 3;

    for (int i = startRow; i < startRow + 3; i++) {
        for (int j = startCol; j < startCol + 3; j++) {
            if (grid[i][j] == num)
                return false;
        }
    }

    return true;
}

bool solve() {

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {

            if (grid[i][j] == -1) {

                for (int num = 1; num <= 9; num++) {

                    if (safe(i, j, num)) {
                        grid[i][j] = num;

                        if (solve())
                            return true;

                        grid[i][j] = -1;
                    }
                }

                return false;
            }
        }
    }

    return true;
}

int main() {

    if (solve()) {
        cout << "Solved Sudoku:\n";

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "No solution exists";
    }

    return 0;
}

