#include <stdio.h>

// void printHelloWorld(int n);

typedef struct
{
    int age;
    char *name;
} student;

int main(int argc, char **argv)
{
    // puts("Hello world!");

    // for (int i = 0; i < 10; i++)
    // {
    //     puts("Hello World");
    // }

    // int i = 0;
    // while (i < 10)
    // {
    //     puts("Hello World!!");
    //     i++;
    // }
    // printHelloWorld(20);

    // int i = 0;
    // do
    // {
    //     puts("Checking");
    //     i += 1;
    // } while (i < 10);

    student s1;
    s1.age = 10;
    s1.name = "Abhishek";

    puts(s1.name);
    printf("%d", s1.age);

    return 0;
}

// void printHelloWorld(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         puts("Hello World");
//     }
// }