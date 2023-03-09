#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 3> c = {1,2,3};
    array<int, 3> b = {2,3,4};

    array<int, 3>::iterator pos;

    // 交换元素
    c.swap(b);
    for (pos = c.begin(); pos != c.end(); ++pos) {
        cout << *pos << " ";
    }
    return 0;
}