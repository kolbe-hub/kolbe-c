/**
 * #include 代表引入哪些外部的依赖包，相当于java的import概念
 */
#include <iostream>
#include "Student.h"

/**
 * using namespace 代表命名空间，相当于java的package概念
 */
using namespace std;

int main() {

    /**
     * cout 是标准的输出函数，因为定义在了std命名空间下，所以可以直接使用
     */
    cout << "Hello World" << endl;

    /**
     * 通过new的方式创建对象，需要使用指针来接收
     */
    Student* kolbe = new Student("kolbe");
    /**
     * 使用指针来接收时，需要使用 -> 来调用成员
     */
    kolbe->sayHello();

    /**
     * 通过直接创建的方式，使用常规的变量来接收
     */
    Student henry("henry");
    /**
     * 使用变量来接收时，需要使用 . 来调用成员
     */
    henry.sayHello();

    /**
     * 返回0代表正常结束，返回非0代表异常结束
     */

    delete kolbe;
    return 0;
}