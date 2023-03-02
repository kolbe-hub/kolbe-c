#include <iostream>
#include <cstring>

using namespace std;

/**
 * 2.6 ��������
 */
class Rabbit {
public:
    Rabbit(string name, const char* food);
    void eat();
    ~Rabbit();
private:
    string _name;
    char* _food;
};
Rabbit::Rabbit(string name, const char* food) {
    cout << "���ù��캯��" << endl;
    _name = name;
    _food = new char[50];
    memset(_food, 0, 50);
    strcpy(_food, food);
}

void Rabbit::eat() {
    cout << _name << "is eating " << _food << endl;
}
Rabbit::~Rabbit() {
    cout << "�������������� ����" << _name << endl;
    if (_food != NULL) {
        delete []_food;
    }
}
/*

int main() {
    Rabbit A("A", "luobo");
    A.eat();
    Rabbit B("B", "baicai");
    B.eat();
    return 0;
}
*/
