/*
** EPITECH PROJECT, 2026
** headerfly
** File description:
** utils_helper
*/

#include "headerfly.h"

int display_help(int value_to_return)
{
    FILE *out = (value_to_return == 84 ? stderr : stdout);

    fprintf(out, BOLD BLUE "USAGE\n" RESET);
    fprintf(out, "\t./headerfly [--help] [--auto]\n\n");
    fprintf(out, BOLD BLUE "DESCRIPTION\n" RESET);
    fprintf(out, "\t--help: Display this help.\n");
    fprintf(out, "\t--auto: Active automatic mode.\n");
    return value_to_return;
}
