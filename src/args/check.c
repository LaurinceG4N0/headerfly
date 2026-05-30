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
    if (args->help_flag)
        return display_help(42);
    return (0);
}

void display_args(args_t *args)
{
    if (args == NULL) {
        printf("NOTHING TO DISPLAY.\n");
        return;
    }
    printf("help_flag\t:\t[%d]\n", args->help_flag);
    printf("auto_flag\t:\t[%d]\n", args->auto_flag);
    printf("nb_files\t:\t[%d]\n", args->nb_files);
    printf("filenames:\n");
    for (int i = 0; i < args->nb_files; ++i)
        printf("\t- [%s]\n", args->filenames[i]);
}
