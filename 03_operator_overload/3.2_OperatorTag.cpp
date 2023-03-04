#include <iostream>
#include "string.h"

using namespace std;

class Tag {
private:
    int size;
    char* buf;
public:
    Tag(int n);
    Tag(const char* src);
    ~Tag() {
        delete[] buf;
    }
    char& operator[] (int n);
    void show() {
        for (int i = 0; i < size; i++) {
            cout << buf[i];
        }
    }
};
Tag::Tag(int n) {
    size = n;
    buf = new char[size + 1];
    *(buf + size) = '\0';
}

Tag::Tag(const char *src) {
    buf = new char[strlen(src) + 1];
    strcpy(buf, src);
    size = strlen(buf);
}

char &Tag::operator[](int n) {
    static char ch = 0;
    if (n > size || n < 0) {
        cout << "越界" << endl;
        return ch;
    } else {
        return *(buf + n);
    }
}
int main() {
    Tag attribute(20);
    for (int i = 0; i < 20; i++) {
        attribute[i] = 65 + i;
    }
    attribute.show();
    return 0;
}
