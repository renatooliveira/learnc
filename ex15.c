#include <stdio.h>

int main(int argc, char** argv)
{
    int ages[] = {23, 24, 25, 26, 27};
    char *names[] = {"A", "B", "C", "D", "E"};

    int count = sizeof(ages) / sizeof(int);

    int i;

    for(i = 0; i < count; i++)
    {
        printf("%s is %d years old.\n", names[i], ages[i]);
    }

    int *cur_age = ages;
    char **cur_name = names;

    for(i = 0; i < count; i++)
    {
        printf("%s is %d years old.\n", *(cur_name+i), *(cur_age+i));
    }
    return 0;
}