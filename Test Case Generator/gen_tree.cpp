// generating a tree in a simple way
#include <bits/stdc++.h>
using namespace std;

int rand(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0), cin.tie(0);
    srand(atoi(argv[1]));
    int n = rand(2, 20);
    // printf("%d\n", n);
    cout << n << "\n";
    for (int i = 2; i <= n; ++i) {
        // printf("%d %d\n", rand(1, i - 1), i);
        cout << rand(1, i - 1) << " " << i << '\n';
    }
}