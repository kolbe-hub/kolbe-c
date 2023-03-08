#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> c = {1,2,3};
    vector<int>::iterator pos;
    vector<int>::reverse_iterator pos_r;

    cout << "iterator:" << endl;
    for (pos = c.begin(); pos != c.end(); ++pos) {
        cout << *pos << " ";
    }
    cout << endl;
    cout << "iterator reverse:" << endl;
    for (pos_r = c.rbegin(); pos_r != c.rend(); ++pos_r) {
        cout << *pos_r << " ";
    }

    return 0;
}