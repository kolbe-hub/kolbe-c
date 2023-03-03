#include <iostream>

/**
 * 关系运算符重载（如：==或<）
 * 关系运算符重载返回值类型仍然是bool类型，即true或false
 */
using namespace std;
class Student {
public:
    Student(string name, int age);
    friend bool operator ==(Student& student1, Student& student2);
private:
    string _name;
    int _age;
};

Student::Student(string name, int age) {
    _name = name;
    _age = age;
}
bool operator==(Student& student1, Student& student2) {
    return student1._age == student2._age;
}

int main() {
    Student student1("kolbe", 1);
    Student student2("henry", 1);
    cout << "student1是否等于student2？: " << (student1 == student2 ? "是" : "否") << endl;
    return 0;
}