#include <iostream>
#include <cstring>

using namespace std;
class Assign{
public:
    char* _name;
    char* _url;
public:
    Assign(const char* name, const char* url);
    Assign(const Assign& temp);
    ~Assign() {
        delete[] _name;
        delete[] _url;
    }
    Assign& operator=(Assign& temp);
};

Assign::Assign(const char *name, const char *url) {
    this-> _name = new char[strlen(name) + 1];
    this-> _url = new char[strlen(url) + 1];
    if (_name) {
        strcpy(this->_name, name);
    }
    if (_url) {
        strcpy(this-> _url, url);
    }
}

/**
 * 使用拷贝函数，因为对象是新创建的，所以不存在之前占用空间的情况，不需要删除占用空间
 */
Assign::Assign(const Assign &temp) {
    this-> _name = new char[strlen(temp._name) + 1];
    this-> _url = new char[strlen(temp._url) + 1];
    if (_name) {
        strcpy(this->_name, temp._name);
    }
    if (_url) {
        strcpy(this-> _url, temp._url);
    }
}

/**
 * 使用等号赋值，因为参数中的引用是已经存在的对象，所以需要先删除之前占用的空间
 */
Assign& Assign::operator=(Assign &temp) {
    /**
     * 删除之前占用的空间
     */
    delete[] _name;
    delete[] _url;
    this-> _name = new char[strlen(temp._name) + 1];
    this-> _url = new char[strlen(temp._url) + 1];
    if (_name) {
        strcpy(this->_name, temp._name);
    }
    if (_url) {
        strcpy(this-> _url, temp._url);
    }
    return *this;
}
/*
int main() {
    Assign a("kolbe", "www.kolbe.net");
    Assign b(a);
    Assign c = b;
    cout << "a:" << a._name << "," << a._url << endl;
    cout << "b:" << b._name << "," << b._url << endl;
    cout << "c:" << c._name << "," << c._url << endl;
    return 0;
}
*/
