#include <iostream>

class C1 {
    int i;
public:
    void setValue(int value) {
        i = value;
    }
    int getValue() const{
        return i;
    }
    int getValue(){
        return i;
    }
};



int main() {
    int i = 47;
    C1 c;
    c.setValue(i);
    const C1 c2 = c;
    std::cout << "Value: " << c.getValue() << std::endl;
    std::cout << "Value: " << c2.getValue();
    return 0;
}
