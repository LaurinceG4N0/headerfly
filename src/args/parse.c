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
    args->help_flag = -1;
    args->auto_flag = -1;
    args->nb_files = 0;
    args->filenames = NULL;
    return args;
}

static int is_invalid_flag(char *flag)
{
    const char *flags[] = {"--help", "--auto", NULL};

    if (flag == NULL)
        return (1);
    if (!(flag[0] == '-' && flag[1] == '-'))
        return (1);
    return !str_is_in_array(flag, flags);
}

static int check_and_set_flag(char *flag, int *flag_dest)
{
    if (*flag_dest != -1)
        return write_error(flag, REPEATED_FLAG);
    *flag_dest = 1;
    return (0);
}

int get_flags(int ac, char **av, args_t *args)
{
    for (int i = 1; i < ac; ++i) {
        if (!strcmp(av[i], "--help") &&
            check_and_set_flag(av[i], &args->help_flag))
            return (84);
        if (!strcmp(av[i], "--auto") &&
            check_and_set_flag(av[i], &args->auto_flag))
            return (84);
        if (av[i][0] == '-' && is_invalid_flag(av[i]))
            return write_error(av[i], INVALID_FLAG);
    }
    return 0;
}

int get_filenames(int ac, char **av, args_t *args)
{
    char **temp = NULL;

    for (int i = 1; i < ac; ++i) {
        if (av[i][0] == '-')
            continue;
        temp = realloc(args->filenames,
            (args->nb_files + 2) * sizeof(char *));
        if (!temp) {
            free_array_char(args->filenames, args->nb_files);
            return (84);
        }
        args->filenames = temp;
        args->filenames[args->nb_files] = strdup(av[i]);
        args->nb_files++;
        args->filenames[args->nb_files] = NULL;
    }
    return (0);
}

args_t *parse_args(int ac, char **av)
{
    args_t *args = NULL;

    if (ac < 2)
        return NULL;
    args = init_args();
    if (args == NULL)
        return NULL;
    if (get_flags(ac, av, args) == 84) {
        destroy_args(&args);
        return NULL;
    }
    if (get_filenames(ac, av, args) == 84)
        destroy_args(&args);
    return args;
}
