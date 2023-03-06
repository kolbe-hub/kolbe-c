#include <iostream>

using namespace std;

template<typename T>
class Array {
private:
    int _size;
    T* _ptr;
public:
    Array(T attr[], int s) {
        _ptr = new T[s];
        _size = s;
        for (int i = 0; i < _size; i++) {
            _ptr[i] = attr[i];
        }
    }
    void show() {
        for (int i = 0; i < _size; i++) {
            cout << *(_ptr + i) << " ";
        }
        cout << endl;
    }
};
int main() {
    char attr[] = {'a', 'b', 'c', 'd', 'e'};
    Array<char> a1(attr, 5);
    a1.show();

    int intAttr[] = {1,2,4,5,6};
    Array<int> a2(intAttr, 10);
    a2.show();
    return 0;
}