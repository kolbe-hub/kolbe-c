#include <iostream>
using namespace std;

/**
 * 2.3 ��װ
 */
class Student {
public:
    void study();
    void exam();
    void setName(string name);
    void setAge(int age);
    string getName();
    int getAge();
private:
    string _name;
    int _age;
};

void Student::study() {
    cout << "ѧϰC++" << endl;
}
void Student::exam() {
    cout << "C++���Գɼ�100��" << endl;
}
void Student::setAge(int age) {
    if (age < 0 || age > 100) {
        cout << "_name" << "�����������" << endl;
        _age = 0;
    } else {
        _age = age;
    }
}
string Student::getName() {
    return _name;
}
void Student::setName(string name) {
    _name = name;
}
int Student::getAge() {
    return _age;
}
