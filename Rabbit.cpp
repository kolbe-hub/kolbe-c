# include <iostream>
#include <cstring>

using namespace std;

class Rabbit {
public:
    Rabbit(string name, const char* pf);
    void eat();
    ~Rabbit();
private:
    string _name;
    char* _food;
};

Rabbit::Rabbit(string name, const char* pf) {
    cout << "invoke construct" << endl;
    _name = name;
    // 为_food指针申请空间
    _food = new char[50];
    // 初始化_food空间
    memset(_food, 0, 50);
    // 将参数pf指向的数据复制到_food中
    strcpy(_food, pf);
}
void Rabbit::eat() {
    cout << _name << " is eating" << _food << endl;
}

Rabbit::~Rabbit() {
    cout << "invoke clear func" << _name << endl;
    if (_food != NULL) {
        delete []_food;
    }
}
int main() {
    Rabbit A("A", "luobo");
    A.eat();
    Rabbit B("B", "baibai");
    B.eat();
    return 0;
}