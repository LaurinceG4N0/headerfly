/*
** EPITECH PROJECT, 2026
** headerfly
** File description:
** utils_h
*/

#ifndef UTILS_H_
    #define UTILS_H_
    #define _GNU_SOURCE
    #define RESET "\033[0m"
    #define BOLD "\033[1m"
    #define RED "\033[31m"
    #define BLUE "\033[34m"
    #include <stdio.h>
    #include <stdlib.h>
    #include <fcntl.h>
    #include <string.h>
    #include <sys/stat.h>
    #include <time.h>

/* UTILS_ARRAY */
int str_is_in_array(const char *str, const char **array);
void free_array_char(char **array, int rows);

/* UTILS_ERROR */
typedef enum {
    NULL_ARGS,
    INVALID_FLAG,
    REPEATED_FLAG,
    FILE_NOT_CREATED
} error_flag_t;

typedef char * msg_t;

int write_error(char *location, error_flag_t flag);

/* UTILS_FILE */
int write_at_header(const char *filename, char *header);

/* UTILS_HELPER */
int display_help(int value_to_return);

/* UTILS_INPUTS */
char *get_input(char *prompt);

#endif /* UTILS_H_ */
