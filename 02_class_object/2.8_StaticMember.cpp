#include <iostream>
using namespace std;

/**
 * 2.8 Static成员
 */
class StaticMember {
public:
    static int memberCount;
    StaticMember(string name);
    void sayHello();
private:
    string _name;
};
StaticMember::StaticMember(string name) {
    _name = name;
    memberCount++;
}
void StaticMember::sayHello() {
    cout << "hello, my name is " << _name << endl;
    cout << "total member count " << memberCount << endl;
}
int StaticMember::memberCount = 0;

/*int main() {
    StaticMember staticMember1("kolbe");
    StaticMember staticMember2("henry");
    cout << StaticMember::memberCount << endl;
    staticMember1.sayHello();
}*/

