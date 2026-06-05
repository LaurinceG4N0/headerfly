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
    char whoami[256] = {0};
    snprintf(whoami, sizeof(whoami), "%s <%s>", infos->owner_name, infos->owner_email);
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
        whoami, infos->name, infos->file_concerned, infos->version,
        infos->license, infos->github_url, infos->date_created, infos->description
    );

    if (result == -1)
        return NULL;
    return header;
}

int apply_info_project(info_project_t *infos)
{
    char *header = generate_header(infos);

    if (header == NULL)
        return (84);
    write_at_header(infos->file_concerned, header);
    free(header);
    return (0);
}
