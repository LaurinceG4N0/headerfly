/*
** EPITECH PROJECT, 2026
** headerfly
** File description:
** init_info_project
*/

#include "headerfly.h"

info_project_t *init_info_project(void)
{
    info_project_t *infos = malloc(sizeof(info_project_t));

    if (infos == NULL)
        return NULL;
    infos->owner_name = NULL;
    infos->owner_email = NULL;
    infos->name = NULL;
    infos->file_concerned = NULL;
    infos->version = NULL;
    infos->license = NULL;
    infos->github_url = NULL;
    infos->date_created = NULL;
    infos->description = NULL;
    return infos;
}
