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

/* UTILS_ERROR */
typedef enum {
    NULL_ARGS,
    INVALID_FLAG
} error_flag_t;

typedef char * msg_t;

int write_error(char *location, error_flag_t flag);

#endif /* UTILS_H_ */
