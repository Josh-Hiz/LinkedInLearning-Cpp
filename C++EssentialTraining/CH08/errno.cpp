#include <cstdio>
#include <cerrno>
#include <cstring>

int main(){
    printf("Erasing file foo.bar\n");
    remove("foo.bar");
    printf("errno is: %d\n", errno);
    perror("Cannot erase file that does not exist");

    const char* errorString = strerror(errno);
    printf("Error (%d): %s\n", errno, errorString);

    return 0;
}