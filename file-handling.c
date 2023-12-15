#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("example.txt", "w"); 

    fprintf(file, "Hello World!");

    fclose(file);

    printf("Текст успешно записан в файл мой господин.\n");

    return 0;
}
