template<typename T>
class Base{
private:
    T x;
    T y;
public:
    Base() {};
    Base(T x, T y) {
        this->x = x;
        this->y = y;
    };
    Base getX() {return x;};
    Base getY() {return y;};
    ~Base() {};
};

class Derive: public Base<double> {
private:
    double num;
public:
    Derive(double a, double b, double c): num(c), Base<double>(a, b) {}
};

int main() {
    Derive(1,2,3);

}