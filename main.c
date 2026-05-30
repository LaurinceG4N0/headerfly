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
    info_project_t *infos = NULL;
    int checker = check_args(args);

    if (checker != 0) {
        destroy_args(&args);
        return (checker == 84 ? 84 : 0);
    }
    infos = get_info_project();
    destroy_args(&args);
    destroy_info_project(&infos);
    return (0);
}
