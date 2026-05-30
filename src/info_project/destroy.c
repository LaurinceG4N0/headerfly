/*
** EPITECH PROJECT, 2026
** headerfly
** File description:
** destroy_info_project
*/

#include "headerfly.h"

void destroy_info_project(info_project_t **infos)
{
    if (infos == NULL || *infos == NULL)
        return;
    free((*infos)->owner_name);
    free((*infos)->owner_email);
    free((*infos)->name);
    free((*infos)->file_concerned);
    free((*infos)->version);
    free((*infos)->license);
    free((*infos)->repo_name);
    free((*infos)->date_created);
    free((*infos)->description);
    free(*infos);
    *infos = NULL;
}
