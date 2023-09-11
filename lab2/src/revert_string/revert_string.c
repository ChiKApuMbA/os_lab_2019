#include "revert_string.h"

void RevertString(char *str)
{
    char *start = str; // Указатель на начало строки
    char *end = str + strlen(str) - 1; // Указатель на конец строки

    // Переставляем символы до тех пор, пока указатели не пересекутся
    while (start < end)
    {
        // Меняем символы местами и сдвигаем указатели
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

