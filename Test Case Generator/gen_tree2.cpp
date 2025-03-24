// generating a tree in a not-so-stupid way (better way)
#include <bits/stdc++.h>
using namespace std;

// random number in range between a to b....
int rand(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0), cin.tie(0);
    srand(atoi(argv[1]));
    int n = rand(2, 20);
    // printf("%d\n", n);
    cout << n << '\n';
    vector<pair<int, int>> edges;
    for (int i = 2; i <= n; ++i) {
        edges.emplace_back(rand(1, i - 1), i);
    }

    // re-naming vertices
    vector<int> perm(n + 1);
    for (int i = 1; i <= n; ++i) {
        perm[i] = i;
    }

    random_device rd;
    mt19937 g(rd());
    shuffle(perm.begin() + 1, perm.end(), g);

    // random order of edges
    shuffle(edges.begin(), edges.end(), g);

    for (pair<int, int> edge : edges) {
        int a = edge.first, b = edge.second;
        if (rand() % 2) {
            // random order of two vertices
            swap(a, b);
        }
        // printf("%d %d\n", perm[a], perm[b]);
        cout << perm[a] << " " << perm[b] << '\n';
    }
}
