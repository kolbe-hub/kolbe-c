#include <iostream>
using namespace std;

/**
 * 2.8 const 成员
 */
class Person {
public:
    Person(string name, int age, string address);
    const string _address;
    ~Person();
    void place();
    void myInformation();
    void myInformation() const;
private:
    const string _name;
    const int _age;
    string phone;
};
Person::Person(string name, int age, string address) :
    _name(name), _age(age), _address(address) {
    cout << "_name:" << _name << endl;
    cout << "age:" << _age << endl;
    cout << "address:" << _address << endl;
}

Person::~Person() {}

void Person::place() {
    cout << "我住在" << _address << endl;
}

void Person::myInformation() {
    cout << "我叫" << _name << "今年" <<
     _age << "岁, 我的手机号：" << phone << endl;
    place();
}

/**
 * 常成员函数只能查询成员变量或常量
 * 不允许修改成员变量
 * 不允许调用成员函数
 * 只能被常成员变量调用
 */
void Person::myInformation() const{
    cout << "我叫" << _name << "今年" <<
         _age << "岁, 我的手机号：" << phone << endl;
}

/*
int main() {
    Person person("kolbe", 18, "Chengdu");
    person.myInformation();

    const Person constPerson("henry", 20, "Sichuan");
    constPerson.myInformation();
    return 0;
}
*/
