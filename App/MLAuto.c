/*
    Main CLI application script, execute this file in any code editor/IDE or use the "MLAuto.exe"
    in this directory as it is from file manager.

    To devs :
    Run this code only after running main.c and validating all new features or fixes are fully
    working as intended!

    Also run this code only during :
            * New feature/security updates
            * Feature rollbacks
*/

#include <stdio.h>

#include "app.h"
#include "../check/libcheck.h"

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        start_prog();
        printf("\n>> Welcome to MLAuto CLI!\n");
        printf("\n>> Usage : \t./MLAuto [-flag]\n");
        printf("\n>> For Flag info, use [-h] flag.\n");

        return EXIT_SUCCESS;
    }
    else if (strcmp(argv[1], "-h") == 0)
    {
        start_prog();
        printf("\n>> Help :\n");
        printf("\n>> [-h]\t\tShow this help section\n");
        printf("\n>> [-v]\t\tShow version info\n");
        printf("\n>> [-d]\t\tDebug mode\n");
        printf("\n>> [-w]\t\tWrite output to file\n");
        printf("\n>> [-r]\t\tRead input from file\n");

        return EXIT_SUCCESS;
    }
    else if (strcmp(argv[1], "-v") == 0)
    {
        start_prog();
        printf("\n>> MLAuto Version : %s\n", VER);
        printf("\n>> Copyright (c) Akshay_Babu, All rights reserved!\n");

        return EXIT_SUCCESS;
    }
    else if (strcmp(argv[1], "-d") == 0)
    {
        start_prog();
        printf("\n>> Debug mode activated!\n");
        debug();

        return EXIT_SUCCESS;
    }
    else if (strcmp(argv[1], "-w") == 0)
    {
        app();

        return EXIT_SUCCESS;
    }
    else if (strcmp(argv[1], "-r") == 0)
    {
        printf("\n>> Read mode is under development, reverting to write mode\n");
        app();

        return EXIT_SUCCESS;
    }
    else
    {
        printf("\n>> Invalid flag! Use [-h] for help.\n");

        return EXIT_FAILURE;
    }
    return 0;
}
