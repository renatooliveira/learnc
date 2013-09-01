#include <stdio.h>

int main(int argc, char **argv)
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4532;
    char initial = 'S';
    char* first_name = "Renato";
    char* second_name = "Oliveira";

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome super power.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("I have a first name %s.\n", first_name);
    printf("I have a second name %s.\n", second_name);
    printf("My whole name is %s %c. %s.\n", first_name, initial, second_name);

    return 0;
}