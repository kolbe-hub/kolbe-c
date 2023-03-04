#include <iostream>
#include <cstring>

using namespace std;
class Student {
private:
    string _id;
    char* _name;
public:
    Student(string id, const char* name): _id(id) {
        _name = new char[strlen(name) + 1];
        strcpy(_name, name);
    }
    /**
     * 类型转换函数格式：operator 数据类型()
     * 1）重载的数据类型前不能有返回值类型
     * 2）返回值类型由重载的数据类型决定
     */
    operator char*() {
        return _name;
    }
    void show() {
        cout << "id: " << _id << ", name: " << _name << endl;
    }
};
/*
int main() {
    Student student("10001", "kolbe");
    cout << "student:";
    student.show();
    */
/**
     * 调用类型转换函数
     *//*

    char* ch = student;
    cout << ch << endl;
    return 0;
}*/
