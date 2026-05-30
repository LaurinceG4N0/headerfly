/*
** EPITECH PROJECT, 2026
** headerfly
** File description:
** check_args
*/

#include "headerfly.h"

int check_args(args_t *args)
{
    if (args == NULL)
        return write_error(NULL, NULL_ARGS);
    return (0);
}
