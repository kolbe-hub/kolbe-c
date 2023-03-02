#include <iostream>

using namespace std;

class Rabbit {
public:
    Rabbit(string name, const char* pf);
    void eat();
    ~Rabbit();
private:
    string _name;
    char* _food;
};
