#include <iostream>

using namespace std;

/**
 * 虚继承可以解决多继承多的二义性，实际成员只会拷贝一份副本
 */
class Furniture {
public:
    string _wood;
    Furniture(string wood) : _wood(wood) {}
};

class Sofa : virtual public Furniture {
protected:
    float _length;
public:
    Sofa(float length, string wood) : Furniture(wood), _length(length) {}
};

class Bed : virtual public Furniture {
protected:
    float _width;
public:
    Bed(float width, string wood) : Furniture(wood), _width(width) {}
};

class SofaBed : public Sofa, public Bed {
public:
    SofaBed(float length, string wood1, float width, string wood2)
            : Sofa(length, wood1), Bed(width, wood2), Furniture(wood2) {}
    void getSize() {
        cout << "沙发床长：" << _length << endl;
        cout << "沙发床宽：" << _width << endl;
        cout << "沙发床材质：" << _wood << endl;
    }
};
/*
int main() {
    SofaBed sofaBed(1.8, "梨木", 1.5, "檀木");
    sofaBed.getSize();
    cout << sofaBed._wood << endl;
    cout << sofaBed.Bed::_wood << endl;
    cout << sofaBed.Sofa::_wood << endl;
    return 0;
}*/
