#include <iostream>
#include <string>

using namespace std;

/**
 * 3.4 运算符重载 “()”
 */
class Show {
public:
    void operator() (const string str) {
        cout << str << endl;
    }
    float operator() (const float num) {
        return num*num;
    }
};
int main() {
    Show s;
    s("abcd");
    cout << s(4) << endl;
    return 0;
}
