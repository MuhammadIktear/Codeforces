#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int N, E;
    cin >> N >> E;

    // Adjacency list representation of the graph
    vector<vector<int>> adjList(N);
    for (int i = 0; i < E; ++i) {
        int A, B;
        cin >> A >> B;
        adjList[A].push_back(B);
        adjList[B].push_back(A);
    }

    int X, Y, K;
    cin >> X >> Y >> K;

    // Check if X and Y are the same city
    if (X == Y) {
        cout << "YES" << endl;
        return 0;
    }

    // Use breadth-first search (BFS) to explore the graph starting from Romeo and Juliet
    queue<pair<int, int>> bfsQueue;
    bfsQueue.push({X, 0});

    vector<bool> visited(N, false);
    visited[X] = true;

    while (!bfsQueue.empty()) {
        pair<int, int> curr = bfsQueue.front();
        bfsQueue.pop();

        int city = curr.first;
        int steps = curr.second;

        if (steps > K) {
            break;
        }

        for (int neighbor : adjList[city]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;

                // If Juliet is in the same city, print YES and exit
                if (neighbor == Y) {
                    cout << "YES" << endl;
                    return 0;
                }

                bfsQueue.push({neighbor, steps + 1});
            }
        }
    }

    // If Juliet can't be reached within K steps, print NO
    cout << "NO" << endl;

    return 0;
}
