#include <cstdio>
#include <iostream>

using namespace std;

struct Employee {
    int id;
    const char* name;
    const char* role;
};

int main() {
    Employee joe = { 42, "Joe", "Boss" };
    Employee* j = &joe;

    printf("%s is the %s and has id %d\n",joe.name, joe.role, joe.id);
    cout << j->name << " " << j->id << " " << j->role << endl;
    return 0;
}
