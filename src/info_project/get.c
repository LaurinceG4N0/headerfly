/*
** EPITECH PROJECT, 2026
** headerfly
** File description:
** get_info_project
*/

#include "headerfly.h"

int check_binary_answer(char *answer, char *first, char *second)
{
    if (!strcmp(answer, first))
        return (1);
    if (!strcmp(answer, second))
        return (0);
    return (-1);
}

char *create_github_url(char *username, char *project_name)
{
    char *github_url = NULL;
    int result = asprintf(&github_url, "https://github.com/%s/%s",
        username, project_name);

    if (result == -1)
        return NULL;
    return github_url;
}

char *get_github_url(char *username, char *project_name)
{
    char *github_url = create_github_url(username, project_name);
    char *answer = NULL;

    printf("Can you confirm that %s is the repository URL of your project ?"
        " Yes or No ? ", github_url);
    answer = get_input("");
    if (check_binary_answer(answer, "Yes", "No")) {
        free(answer);
        return github_url;
    }
    free(answer);
    free(github_url);
    github_url = get_input("Type the repository URL of your project: ");
    return github_url;
}

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
    infos->github_url = get_github_url(infos->owner_name, infos->name);
    infos->description = get_input("Description of the file: ");
    return infos;
}
