#include <stdio.h>
#include <locale.h>
#include <math.h>

int zadanie0();
int zadanie1();
int zadanie1A();
int zadanie2();

int main() {

    setlocale(LC_ALL, "RUS");

    zadanie0();
    zadanie1();
    zadanie1A();
    zadanie2();

    return 0;
}

int zadanie0() {

    int start, n; //*
    char symbol;
    char symbol1, symbol2;

    printf("Введите количество символов: ");
    scanf_s("%d", &n);

    printf("Введите символ: ");
    scanf_s(" %c", &symbol, 1);


    for (start = 1; start <= n; start++)
        putchar(symbol);

    putchar('+');
    //**
    printf("Введите количество символов: ");
    scanf_s("%d", &n);

    printf("Введите первый символ: ");
    scanf_s(" %c", &symbol1, 1);

    printf("Введите второй символ: ");
    scanf_s(" %c", &symbol2, 1);

    for (start = 1; start <= n / 2; start++)
        putchar(symbol1);

    for (start = n / 2 + 1; start <= n; start++)
        putchar(symbol2);
    //***
    printf("Введите количество символов: ");
    scanf_s("%d", &n);

    printf("Введите символ: ");
    scanf_s(" %c", &symbol, 1);

    for (start = 1; start <= n; start++) {
        putchar(symbol);
        putchar('!');
    }




    return 0;


  
}

int zadanie1() {

    int n, m;
    int s = 0;
    int k = 1;

    printf("Введите значение m:");
    scanf_s("%d", &m);

    printf("Введите значение n:");
    scanf_s("%d", &n);

    for (int i = m; i <= n; i++) {
        s += i;
        printf("Выполнено %d раз\n", k++);
    }

    printf("Результат: %d\n", s);

    return 0;
}
int zadanie1A() {

    int n;
    int result = 1;

    printf("Введите степень n: ");
    scanf_s("%d", &n);

    for (int i = 0; i <= n; i++) {

        printf("2^%d = %10d\n", i, result);

        result = result * 2;
    }

    result = result / 2;

    printf("Результат: %.1fK\n", (double)result / 1024);

    return 0;
}
int zadanie2() {

    double x, y, h;

    printf("Функция: y = x^2 + sin(5x)\n");

    printf("Введите шаг табуляции: ");
    scanf_s("%lf", &h);

    printf("\n       x       |      f(x)\n");
    printf("-----------------------------\n");

    for (x = 0.1; x <= 2.1; x += h) {

        y = x * x + sin(5 * x);

        printf("%14.4f | %12.6f\n", x, y);
    }


    return 0;
}

















