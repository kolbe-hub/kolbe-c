#include <iostream>
#include <string>

using namespace std;

class Data {
public:
    Data(string str) : _str(str) {
        cout << "Data类构造函数" << endl;
    }

    ~Data() {
        cout << "Data类析构函数" << endl;
    }

    void dis() {
        cout << _str << endl;
    }

private:
    string _str;
};


class Count {
public:
    friend class SmartPointer;

    Count(Data *data) {
        _data = data;
        _count = 1;
        cout << "Count类构造函数" << endl;
    }

    ~Count() {
        cout << "Count类析构函数" << endl;
        delete _data;
    }

private:
    Data *_data;
    int _count;
};


class SmartPointer {
public:
    SmartPointer(Data *data) {
        count = new Count(data);
        cout << "创建基类对象" << endl;
    }

    SmartPointer(const SmartPointer &another) {
        count = another.count;
        ++count->_count;
        cout << "SmartPointer类复制构造函数" << endl;
    }

    /**
     * 析构函数，当发现count = 0时，则调用delete清除堆内存
     */
    ~SmartPointer() {
        if (--count->_count == 0) {
            delete count;
            cout << "SmartPointer类析构函数" << endl;
        }
    }

    Data *operator->() {
        return count->_data;
    }

    Data &operator*() {
        return *count->_data;
    }

    int disCount() {
        return count->_count;
    }

private:
    Count *count;
};

/*
int main() {
    Data *data1 = new Data("I Love China!");
    SmartPointer data2 = data1;
    (*data1).dis();
    SmartPointer data3 = data2;
    data2->dis();
    cout << "使用基类对象的指针数量：" << data2.disCount() << endl;
    return 0;
}
*/
