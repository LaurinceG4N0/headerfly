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
    char *github_url;
    char *date_created;
    char *description;
} info_project_t;

int apply_info_project(info_project_t *infos);
info_project_t *init_info_project(void);
info_project_t *get_info_project(void);
void destroy_info_project(info_project_t **infos);

#endif
