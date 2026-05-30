/*
** EPITECH PROJECT, 2026
** headerfly
** File description:
** utils_h
*/

#ifndef UTILS_H_
    #define UTILS_H_
    #define RESET "\033[0m"
    #define BOLD "\033[1m"
    #define RED "\033[31m"
    #define BLUE "\033[34m"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

/* UTILS_ARRAY */
int str_is_in_array(const char *str, const char **array);
void free_array_char(char **array, int rows);

/* UTILS_ERROR */
typedef enum {
    NULL_ARGS,
    INVALID_FLAG,
    REPEATED_FLAG
} error_flag_t;

typedef char * msg_t;

int write_error(char *location, error_flag_t flag);

/* UTILS_HELPER */
int display_help(int value_to_return);

/* UTILS_INPUTS */
char *get_input(char *prompt);

#endif /* UTILS_H_ */
