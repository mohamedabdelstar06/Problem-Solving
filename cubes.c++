#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int height = 0;   // number of full levels built
    int used = 0;     // cubes used so far

    for (int i = 1; ; i++) {
        int cubesForLevel = i * (i + 1) / 2; // sum of 1+2+...+i
        if (used + cubesForLevel <= n) {
            used += cubesForLevel;
            height++;
        } else {
            break;
        }
    }

    cout << height << endl;
    return 0;
}
