#include <iostream>

using namespace std;

/**
 * 2.7 �������캯��
 */
class Sheep {
public:
    Sheep(string name, string color);
    Sheep(const Sheep& another);
    void show();
    ~Sheep();
private:
    string _name;
    string _color;
};

Sheep::Sheep(string name, string color) {
    cout << "���ù��캯��" << endl;
    _name = name;
    _color = color;
}
Sheep::Sheep(const Sheep& another) {
    cout << "���ÿ�������" << endl;
    _name = another._name;
    _color = another._color;
}
Sheep::~Sheep() {
    cout << "������������" << endl;
}
void Sheep::show() {
    cout << _name << " " << _color << endl;
}

int main() {
    Sheep sheepA("Doly", "white");
    cout << "Sheep A:";
    sheepA.show();
    Sheep sheepB(sheepA);
    cout << "Sheep B:";
    sheepB.show();
    return 0;
}