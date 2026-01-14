#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>
#include <string.h>

#include "utils.h"

int main()
{
    dir_check();

    if (fp == NULL)
    {
        printf("Error opening file with relative path: %s\n", strerror(errno));
        printf("\n");
    }
    else
    {
        base_imports();
        ask_torch();
        ask_sns();
        ask_model();

        printf("\n");
        printf("File written successfully at %s\n", relative_path);
        printf("\n");

        fclose(fp);

        return EXIT_SUCCESS;
        exit(0);
    }

    return 0;
}
