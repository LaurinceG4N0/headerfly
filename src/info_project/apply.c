/*
** EPITECH PROJECT, 2026
** headerfly
** File description:
** apply_info_project
*/

#include "headerfly.h"

char *generate_header(info_project_t *infos)
{
    char *header = NULL;
    int result = asprintf(&header,
        "/*\n"
        " * ┌─────────────────────────────────────────────────────────────────┐\n"
        " * │ $ whoami                                                        │\n"
        " * │ > %-61s │\n"
        " * │                                                                 │\n"
        " * │ $ cat project.info                                              │\n"
        " * │ > name: %-55s │\n"
        " * │ > file: %-55s │\n"
        " * │ > version: %-52s │\n"
        " * │ > license: %-52s │\n"
        " * │ > repo: %-55s │\n"
        " * │                                                                 │\n"
        " * │ $ date --created                                                │\n"
        " * │ > created: %-52s │\n"
        " * │                                                                 │\n"
        " * │ $ describe                                                      │\n"
        " * │ > %-61s │\n"
        " * └─────────────────────────────────────────────────────────────────┘\n"
        " */",
        (char*[]){NULL}, info->name, info->file_concerned, info->version, 
        info->license, info->repo_name, info->date_created, info->description
    );
}

int apply_info_project(info_project_t *infos)
{
    (void)infos;
    return (0);
}
