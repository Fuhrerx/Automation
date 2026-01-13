#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>

int main()
{
    const char *dir_name = "python_automation";
    int result = _mkdir(dir_name);

    if (result == 0)
    {
        printf("Directory '%s' created successfully.\n", dir_name);
    }
    else
    {
        if (errno == EEXIST)
        {
            printf("Directory '%s' already exists.\n", dir_name);
        }
        else
        {
            perror("Error creating directory");
        }
    }
    return 0;
}
