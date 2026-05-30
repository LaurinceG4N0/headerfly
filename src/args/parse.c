/*
** EPITECH PROJECT, 2026
** headerfly
** File description:
** parse
*/

#include "headerfly.h"

args_t *init_args(void)
{
    args_t *args = malloc(sizeof(args_t));

    if (args == NULL)
        return NULL;
    args->help_flag = 0;
    args->auto_flag = 0;
    return args;
}

int get_flags(char **av, args_t *args)
{
    if (!strcmp(av[1], "--help"))
        args->help_flag = 1;
    else if (!strcmp(av[1], "--auto"))
        args->auto_flag = 1;
    else
        return write_error(av[1], INVALID_FLAG);
    return (0);
}

args_t *parse_args(int ac, char **av)
{
    args_t *args = NULL;

    if (ac > 2)
        return NULL;
    args = init_args();
    if (args == NULL)
        return NULL;
    if (ac == 1)
        return args;
    if (get_flags(av, args) == 84)
        destroy_args(&args);
    return args;
}
