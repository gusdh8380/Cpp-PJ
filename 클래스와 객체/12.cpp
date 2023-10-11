#include <iostream>
#include <iomanip>

class Time {
private:
    int hour;
    int minute;
    int second;

public:
   
    void setTime(const int h = 0, const int m = 0, const int s = 0) {
        hour = (h >= 0 && h < 24) ? h : 0;
        minute = (m >= 0 && m < 60) ? m : 0;
        second = (s >= 0 && s < 60) ? s : 0;
    }

    
    void print() const {
        std::cout << std::setw(2) << std::setfill('0') << hour << ":"
            << std::setw(2) << std::setfill('0') << minute << ":"
            << std::setw(2) << std::setfill('0') << second
            << "\n";
    }
};

int main() {
    Time t; // °´Ã¼ »ý¼º

    t.setTime(07, 10, 20); 
    t.print(); 

    return 0;
}
