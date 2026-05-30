/*
** EPITECH PROJECT, 2026
** headerfly
** File description:
** args_h
*/

#ifndef ARGS_H_
    #define ARGS_H_

typedef struct args_s {
    int help_flag;
    int auto_flag;
    int nb_files;
    char **filenames;
} args_t;

args_t *parse_args(int ac, char **av);
int check_args(args_t *args);
void display_args(args_t *args);
void destroy_args(args_t **args);

#endif /* ARGS_H_ */
