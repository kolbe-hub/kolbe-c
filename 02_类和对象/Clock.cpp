#include <iostream>
using namespace std;

/**
 * 2.5 构造函数
 */
class Clock {
public:
    Clock();
    Clock(int hour, int minute, int second);
    void showTime();
private:
    int _hour;
    int _minute;
    int _second;
};

Clock::Clock() {
    _hour = 0;
    _minute = 0;
    _second = 0;
}

Clock::Clock(int hour, int minute, int second) {
    _hour = hour;
    _minute = minute;
    _second = second;
}

void Clock::showTime() {
    cout << "current time:" << _hour << ":" << _minute << ":" << _second << endl;
}
/*

int main() {
    Clock clock(1, 1, 10);
    clock.showTime();
    return 0;
}

*/
