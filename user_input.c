#include <stdio.h>

int main(){
    char name[10];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nHello my lord %s! You know you are %d years old!\nYou are so yung!\n", name, age);
}