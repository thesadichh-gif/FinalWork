#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    char ch;
    printf("--- Часть 1: символ ---\n");
    printf("Введите символ: ");
    scanf(" %c", &ch);
    printf("Вы ввели символ: %c\n", ch);
    printf("Код символа (ASCII): %d\n\n", ch);

    while (getchar() != '\n');

    char str[100];
    printf("--- Часть 2: строка ---\n");
    printf("Введите строку (минимум 2 слова, длина >= 15): ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    size_t len = strlen(str);
    printf("Вы ввели: \"%s\"\n", str);
    printf("Длина строки: %zu символов\n\n", len);

    int pos_int, neg_int;
    printf("--- Часть 3: целые числа (положительное и отрицательное) ---\n");
    printf("Введите положительное и отрицательное целые числа (например, 789 -76): ");
    scanf("%d %d", &pos_int, &neg_int);

    printf("\nДесятичный формат (%%d):\n");
    printf("  Без коэффициента: %d, %d\n", pos_int, neg_int);
    printf("  С заданной шириной 10 (выравнивание вправо): %10d, %10d\n", pos_int, neg_int);
    printf("  С левой позиции (ширина 10, выравнивание влево): %-10d, %-10d\n", pos_int, neg_int);

    printf("\nШестнадцатеричный формат (%%x):\n");
    printf("  Без коэффициента: %x, %x\n", pos_int, neg_int);
    printf("  С заданной шириной 10 (выравнивание вправо): %10x, %10x\n", pos_int, neg_int);
    printf("  С левой позиции (ширина 10, выравнивание влево): %-10x, %-10x\n\n", pos_int, neg_int);

    float pos_float, neg_float;
    printf("--- Часть 4: числа с плавающей точкой (положительное и отрицательное) ---\n");
    printf("Введите положительное и отрицательное вещественные числа (например, 956.361 -395.659): ");
    scanf("%f %f", &pos_float, &neg_float);

    printf("\nДесятичная форма (%%f, точность 3 знака): %.3f, %.3f\n", pos_float, neg_float);
    printf("Экспоненциальная форма (%%e, точность 3 знака): %.3e, %.3e\n\n", pos_float, neg_float);

    unsigned int uns;
    printf("--- Часть 5: целое беззнаковое число ---\n");
    printf("Введите беззнаковое целое (например, 794): ");
    scanf("%u", &uns);

    printf("Десятичный беззнаковый (%%u): %u\n", uns);
    printf("Восьмеричный беззнаковый (%%o): %o\n", uns);
    printf("Шестнадцатеричный беззнаковый (%%x): %x\n", uns);
    getchar();
    return 0;
}