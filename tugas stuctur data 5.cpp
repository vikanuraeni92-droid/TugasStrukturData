#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Data teratas: " << s.top() << endl;

    s.pop();

    cout << "Setelah pop, data teratas: " << s.top() << endl;

    return 0;
}