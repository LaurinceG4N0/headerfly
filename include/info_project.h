/*
** EPITECH PROJECT, 2026
** headerfly
** File description:
** info_project_h
*/

#ifndef INFO_PROJECT_H_
    #define INFO_PROJECT_H_

typedef struct info_project_s {
    char *owner_name;
    char *owner_email;
    char *name;
    char *file_concerned;
    char *version;
    char *license;
    char *repo_name;
    char *date_created;
    char *description;
} info_project_t;

info_project_t *get_info_project(args_t *args);

#endif
