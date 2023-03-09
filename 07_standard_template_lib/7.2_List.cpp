#include <iostream>
#include <list>
using namespace std;
template<typename T>
void print(list<T> myList) {
    typename list<T>::iterator it;
    for (it = myList.begin(); it != myList.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}
int main() {
    list<int> lt;
    for (int i = 0; i < 10; i++) {
        lt.push_back(i + 1);
    }
    cout << "The element in the list:" << endl;
    print(lt);
    lt.pop_back();
    lt.push_front(5);
    cout << "Print the elements in the list again" << endl;
    print(lt);
    lt.remove(5);
    cout << "After delete 5, print the elements in the list" << endl;
    print(lt);
    return 0;
}