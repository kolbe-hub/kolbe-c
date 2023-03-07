#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> v;
    v.reserve(10);

    for (int i = 0; i < 10; i++) {
        v.push_back(i+1);
    }
    for (int i : v) {
        cout << v[i] << "  ";
    }
    cout << endl;
    v.pop_back();
    for (int i : v) {
        cout << i << "  ";
    }
    cout << endl;
    cout << "capacity: " << v.capacity() << endl;
    cout << "size: " << v.size() << endl;
    cout << "at: " << v.at(0) << endl;
    cout << "start of the vector: " << v.front() << endl;
    cout << "end of the vector: " << v.back() << endl;
    return 0;
}