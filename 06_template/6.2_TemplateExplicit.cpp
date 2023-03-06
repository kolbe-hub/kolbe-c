#include <iostream>

using namespace std;
template<typename T>
T add(T t1, T t2) {
    return t1+t2;
}

template int add<int>(int t1, int t2);
int main() {
    // 输出76，因为'B'被转成了对应的ASCII码值
    cout << add<int>(10, 'B') << endl;
    // 输出4.6，因为匹配了隐式实例化
    cout << add(1.2, 3.4) << endl;
    // 输出4，因为匹配了显示实例化
    cout << add<int>(1.2, 3.4) << endl;
    return 0;
}