#include <iostream>
using namespace std;

/**
 * 2.3
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
}
void Student::exam() {
}
void Student::setAge(int age) {
    if (age < 0 || age > 100) {
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
