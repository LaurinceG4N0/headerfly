/*
** EPITECH PROJECT, 2026
** headerfly
** File description:
** get_info_project
*/

#include "headerfly.h"

info_project_t *get_info_project(void)
{
    info_project_t *infos = init_info_project();

    printf("Please fill this gap correctly:\n");
    infos->owner_name = get_input("Your username: ");
    infos->owner_email = get_input("Your email: ");
    infos->name = get_input("Name of the project: ");
    infos->file_concerned = get_input("Name of the file concerned: ");
    infos->version = get_input("Version: ");
    infos->license = get_input("License: ");
    infos->repo_name = get_input("Description of the file: ");
    return infos;
}
