### Theoretical Part (45% of the exam)

1. **Git Basics (5%)**
- What is the purpose of the `git commit` command?
- Используется для сохранения и коментирования изменений в файле

- How can you check the status of your files in a Git repository?
- git status

2. **Linux Basics (5%)**
- What command is used to list files in a directory in Linux?
- ls

- How do you create a new directory in Linux?
- mkdir

3. **Header Files in C (10%)**
- What is the purpose of `#include` in C?
- Используется для включения заголовочных файлов и библиотек

- Give an example of a common header file in C and its purpose.
- Приведен пример использования header file in hello.h and hello.c

4. **General C Programming (25%)**
- Describe the difference between local and global variables in C.
- Локальные переменные объявляются внутри функции и существуют
только внутри этой функции, а глобальные переменные объявляются вне функций и доступны
во всем файле программы.

- Explain the purpose of a function prototype in C.
- Прототип функции в C предназначен для объявления сигнатуры функции перед её определением в коде программы

- How do you read input from the user in C?
- С помощью scanf и fgets.
    - Пример с scanf:
    #include <stdio.h>

    int main() {
        char name[10];
        printf("Введите ваше имя: ");
        scanf("%s", name);

        return 0;
    }

    - Пример с fgets:
    #include <stdio.h>

    int main() {
        char name[10];
        printf("Введите ваше имя: ");
        fgets(name, sizeof(name), stdin);

        return 0;
    }

- What is a segmentation fault in C and what are common causes?
- Эта ошибка происходит, когда программа пытается обратиться к памяти, к которой у неё нет доступа.

- Это может произойти, например:
    - при обращении к недопустимой области памяти,
    - выходе за пределы массива,
    - при работе с указателями на освобожденную память.
