#include <cstdio>

//Make variables before placing them in struct
typedef unsigned char points_t;
typedef unsigned char rank_t;

struct score {
    points_t p;
    rank_t r;
};

int main()
{
    score s = { 5, 1 };
    printf("score s had %d points and a rank of %d\n", s.p, s.r);
    
    return 0;
}
