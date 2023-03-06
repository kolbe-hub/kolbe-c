#include <iostream>
using namespace std;

/**
 * 函数模板是函数的抽象，与普通函数相似，只是函数的参数类型是不确定的，在调用过程中才能确定下来
 */

// 定义模板的参数名称
template<typename T>

T add(T t1, T t2) {
    return t1 + t2;
}

/*
int main() {
    cout << add(1,2) << endl;
    cout << add(1.2, 3.4) << endl;
    return 0;
}
*/
