#include <iostream>

class C1 {
    int i;
public:
    void setValue(int value) {
        i = value;
    }
    int getValue(){
        return i;
    }
};



int main() {
    int i = 47;
    C1 c;
    c.setValue(i);
    std::cout << "Value: " << c.getValue();
    return 0;
}
