/*
** EPITECH PROJECT, 2026
** headerfly
** File description:
** utils_array
*/

#include "headerfly.h"

int str_is_in_array(const char *str, const char **array)
{
    if (str == NULL || array == NULL)
        return (0);
    for (int i = 0; array[i]; ++i) {
        if (strcmp(str, array[i]))
            continue;
        return (1);
    }
    return (0);
}

void free_array_char(char **array, int rows)
{
    if (array == NULL)
        return;
    for (int row = 0; array[row] != NULL; ++row) {
        if (rows != - 1 && row == rows)
            break;
        free(array[row]);
    }
    free(array);
}
