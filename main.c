/*
** EPITECH PROJECT, 2026
** headerfly
** File description:
** main
*/

#include "headerfly.h"

int main(int ac, char **av)
{
    args_t *args = parse_args(ac, av);

    display_args(args);
    if (check_args(args) == 84) {
        destroy_args(&args);
        return (84);
    }
    destroy_args(&args);
    return (0);
}
