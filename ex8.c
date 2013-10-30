#include <stdio.h>

int main(int argc, char **argv)
{
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Renato";
    char full_name[] = {'R', 'e', 'n', 'a', 't', 'o', ' ', 'S', '.',
                        ' ', 'O', 'l', 'i', 'v', 'e', 'i', 'r', 'a'};

    printf("size of a int: %lu\n", sizeof(int));
    printf("size of areas (int[]): %lu\n", sizeof(areas));
    printf("The number of ints in areas: %lu\n", sizeof(areas) / sizeof(int));
    printf("The first area is %d, the 2nd is %d\n", areas[0], areas[1]);

    return 0;
    
}