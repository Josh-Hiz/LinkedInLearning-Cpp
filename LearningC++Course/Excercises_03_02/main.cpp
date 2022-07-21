#include <iostream>
#include <string>
//Classes

enum cow_purpose {
    dairy, meat, hide, pet
};

class cow{
private:

    std::string name;
    int age;
    unsigned char purpose;

public:
    cow(std::string name_i, int age_i, unsigned char purpose_i){
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }
    std::string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    unsigned char getPurpose(){
        return purpose;
    }

    void setAge(int newAge){
        age = newAge;
    }

    void setName(std::string Name){
        this->name = Name;
    }

    void setPurpose(unsigned char Purpose){
        this->purpose = Purpose;
    }
};

int main() {
    cow my_cow("Cow", 5, meat);

//    my_cow.age = 5;
//    my_cow.name = "Cow";
//    my_cow.purpose = meat;

    std::cout << my_cow.getName() << std::endl;
    std::cout << my_cow.getAge() << std::endl;
    std::cout << (int) my_cow.getPurpose() << std::endl;

    my_cow.setAge(10);
    std::cout << "New age is: " << my_cow.getAge() << std::endl;

    return 0;
}
