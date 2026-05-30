/*
** EPITECH PROJECT, 2026
** headerfly
** File description:
** utils_inputs
*/

#include "headerfly.h"

char *get_input(char *prompt)
{
    int nb_read = -1;
    size_t pass_len = 0;
    char *input = NULL;

    printf("%s", prompt);
    nb_read = getline(&input, &pass_len, stdin);
    if (nb_read == -1) {
        if (input != NULL)
            free(input);
        return NULL;
    }
    input[nb_read - 1] = '\0';
    return input;
}
