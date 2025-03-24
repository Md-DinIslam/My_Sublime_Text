// generating a random sequence of distinct elements
#include <bits/stdc++.h>
using namespace std;

// random number in range between a to b....
int rand(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0), cin.tie(0);
    // atoi(s) converts an array of chars to int
    srand(atoi(argv[1]));
    int n = rand(2, 100);
    // printf("%d\n", n);
    cout << n << "\n";
    set<int> used;
    for (int i = 0; i < n; ++i) {
        int x;
        do {
            x = rand(1, 100);
        } while (used.count(x));
        // printf("%d ", x);
        cout << x << ' ';
        used.insert(x);
    }
    // puts("");
    cout << "\n";
}
