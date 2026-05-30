/*
** EPITECH PROJECT, 2026
** headerfly
** File description:
** utils_file
*/

#include "headerfly.h"

void copy_content_file(FILE *dest, FILE *src)
{
    char buffer[1024];
    size_t bytes_read = 0;

    bytes_read = fread(buffer, 1, sizeof(buffer), src);
    while (bytes_read > 0) {
        fwrite(buffer, 1, bytes_read, dest);
        bytes_read = fread(buffer, 1, sizeof(buffer), src);
    }
}

int write_at_header(const char *filename, char *header)
{
    const char *temp_name = "temp.txt";
    FILE *file = fopen(filename, "r");
    FILE *temp = fopen(temp_name, "w");

    if (temp == NULL) {
        if (file)
            fclose(file);
        return write_error((char *)temp_name, FILE_NOT_CREATED);
    }
    fputs(header, temp);
    if (file != NULL) {
        copy_content_file(file, temp);
        fclose(file);
    }
    remove(filename);
    rename(temp_name, filename);
    return (0);
}
