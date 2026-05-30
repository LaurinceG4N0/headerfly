/*
** EPITECH PROJECT, 2026
** headerfly
** File description:
** utils_error
*/

#include "headerfly.h"

static const msg_t errors_msg[] = {
    "Cannot take NULL arguments.",
    "Invalid flag."
};

int write_error(char *location, error_flag_t flag)
{
    fprintf(stderr, BOLD RED "[ERROR] " RESET);
    if (location != NULL)
        fprintf(stderr, BOLD "%s: " RESET, location);
    fprintf(stderr, BOLD "%s" RESET "\n", errors_msg[flag]);
    return (84);
}
