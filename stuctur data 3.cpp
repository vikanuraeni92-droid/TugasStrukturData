#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> graph[4];

    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(3);

    for (int i = 0; i < 4; i++) {
        cout << "Node " << i << " : ";
        for (int j : graph[i]) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}