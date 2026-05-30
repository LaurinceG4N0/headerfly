/*
** EPITECH PROJECT, 2026
** headerfly
** File description:
** destroy_args
*/

#include "headerfly.h"

void destroy_args(args_t **args)
{
    if (args == NULL || *args == NULL)
        return;
    free(*args);
    *args = NULL;
}
