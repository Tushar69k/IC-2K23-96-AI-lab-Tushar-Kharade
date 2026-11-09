
#include <iostream>
#include <queue>
#include <set>
using namespace std;

int main() {
    // State: {Missionaries left, Cannibals left, Boat position}
    // Boat: 0 = Left, 1 = Right

    queue<pair<pair<int, int>, int>> q;
    set<pair<pair<int, int>, int>> visited;

    q.push({{3, 3}, 0});
    visited.insert({{3, 3}, 0});

    int m[] = {1, 2, 0, 0, 1};
    int c[] = {0, 0, 1, 2, 1};

    while (!q.empty()) {
        auto current = q.front();
        q.pop();

        int M = current.first.first;
        int C = current.first.second;
        int boat = current.second;

        cout << "(" << M << ", " << C << ", " << boat << ")" << endl;

        if (M == 0 && C == 0 && boat == 1) {
            cout << "Solution found!";
            return 0;
        }

        for (int i = 0; i < 5; i++) {
            int newM, newC;

            if (boat == 0) {
                newM = M - m[i];
                newC = C - c[i];
            }
            else {
                newM = M + m[i];
                newC = C + c[i];
            }

            int newBoat = 1 - boat;

            int rightM = 3 - newM;
            int rightC = 3 - newC;

            if (newM < 0 || newC < 0 || newM > 3 || newC > 3)
                continue;

            if ((newM > 0 && newC > newM) ||
                (rightM > 0 && rightC > rightM))
                continue;

            pair<pair<int, int>, int> next = {{newM, newC}, newBoat};

            if (visited.find(next) == visited.end()) {
                visited.insert(next);
                q.push(next);
            }
        }
    }

    cout << "No solution";
    return 0;
}

