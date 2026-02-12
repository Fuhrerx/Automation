#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>
#include <string.h>

#define SIZE 250

FILE *fp = NULL;

int ans_reg;
int ans_class;
int model;

char dir_name[25] = "python_automation";
char relative_path[50] = "python_automation/model.py";

extern void start_prog();
extern void ask_dir_name();
extern void ask_dir_path();
extern void dir_check();
extern void base_imports();
extern void ask_torch();
extern void ask_sns();
extern void ask_model();
extern void scaler();

#include "markdown.h"
#include "../scikit/imports.h"
#include "../scikit/models.h"
#include "cells.h"
#include "PyList.h"

extern void start_prog()
{
    printf("\nMACHINE LEARNING PIPEPLINE AUTOMATOR 1.3.1 (MLAuto)\n");
    printf("\nCopyright (c) Akshay_babu, All rights reserved!\n");
    printf("\nType 'exit' to exit from the program!\n");
}

extern void ask_dir_name()
{
    printf("\n>> Enter the name of the folder (copy and paste default name - python_automation) : \n");
    scanf("%s", &dir_name);
    if (strcmp(dir_name, "exit") == 0)
    {
        exit(1);
    }
}

extern void ask_dir_path()
{
    printf("\n>> Enter the name (copy and paste default path - python_automation/model.py) : \n");
    scanf("%s", &relative_path);
    if (strcmp(relative_path, "exit") == 0)
    {
        exit(1);
    }
}

extern void dir_check()
{
    int result = _mkdir(dir_name);

    if (result == 0)
    {
        printf("\n>> Directory '%s' created successfully.\n", dir_name);
        printf("\n");
    }
    else
    {
        if (errno == EEXIST)
        {
            printf("\n>> Directory '%s' already exists.\n", dir_name);
            printf("\n");
        }
        else
        {
            perror("\n>> Error creating directory");
            printf("\n");
        }
    }

    fp = fopen(relative_path, "w");
}

extern void base_imports()
{
    fprintf(fp, pd);
    fprintf(fp, "\n");
    fprintf(fp, np);
    fprintf(fp, "\n");
    fprintf(fp, plt);
    fprintf(fp, "\n");
    fprintf(fp, sns);
    fprintf(fp, "\n");
    fprintf(fp, tts);
    fprintf(fp, "\n");
    fprintf(fp, as);
    fprintf(fp, "\n");
    fprintf(fp, sc);
    fprintf(fp, "\n");
}

extern void ask_torch()
{
    char ans[4];

    printf("\n>> Do you want PyTorch? (yes/no) : \n-- ");
    scanf("%s", ans);

    lower(ans);

    if (strcmp(ans, "yes") == 0)
    {
        fprintf(fp, torch);
        fprintf(fp, "\n");
    }
    else if (strcmp(ans, "no") == 0)
    {
        printf("\n>> PyTorch has not been imported!\n");
    }
    else if (strcmp(ans, "exit") == 0)
    {
        printf("\n>> Program Terminated!\n");
        exit(1);
    }
    else
    {
        system("cls");
        printf("\n>> Invalid, PyTorch not imported : select again\n");
        ask_torch();
    }
}

extern void ask_model()
{
    printf("\n>> What kind of model are you gonna use : \n");
    printf(">> Regression (1)\n>> Classification (2)\n");
    printf(">> Choose : \n-- ");
    scanf("%d", &model);

    if (model == 1)
    {
        printf("\n>> What regression model are you planning to use : \n");
        printf(">> Linear Regresssion (1)\n>> Logistic Regression (2)\n>> Decision Tree regressor (3)\n>> XGBoost regressor (4)\n>> Ridge regressor (5)\n>> Random Forest regressor (6)\n>> K nearest regressor (7)\n>> Lasso regression (8)\n>> Elastic Net regression (9)\n>> Support Vector Regression (10)\n");
        printf(">> Choose : \n-- ");
        scanf("%d", &ans_reg);

        switch (ans_reg)
        {
        case 1:
            fprintf(fp, sk_lin);
            fprintf(fp, "\n");
            fprintf(fp, mse_r2);
            fprintf(fp, "\n");
            break;

        case 2:
            fprintf(fp, sk_log);
            fprintf(fp, "\n");
            fprintf(fp, mse_r2);
            fprintf(fp, "\n");
            break;

        case 3:
            fprintf(fp, sk_dec_reg);
            fprintf(fp, "\n");
            fprintf(fp, mse_r2);
            fprintf(fp, "\n");
            break;

        case 4:
            fprintf(fp, xgboost);
            fprintf(fp, "\n");
            fprintf(fp, mse_r2);
            fprintf(fp, "\n");
            break;

        case 5:
            fprintf(fp, sk_lin_ridge);
            fprintf(fp, "\n");
            fprintf(fp, mse_r2);
            fprintf(fp, "\n");
            break;

        case 6:
            fprintf(fp, ran_for_reg);
            fprintf(fp, "\n");
            fprintf(fp, mse_r2);
            fprintf(fp, "\n");
            break;

        case 7:
            fprintf(fp, k_near_reg);
            fprintf(fp, "\n");
            fprintf(fp, mse_r2);
            fprintf(fp, "\n");
            break;

        case 8:
            fprintf(fp, lasso);
            fprintf(fp, "\n");
            fprintf(fp, mse_r2);
            fprintf(fp, "\n");
            break;

        case 9:
            fprintf(fp, elastic);
            fprintf(fp, "\n");
            fprintf(fp, mse_r2);
            fprintf(fp, "\n");
            break;

        case 10:
            fprintf(fp, svr);
            fprintf(fp, "\n");
            fprintf(fp, mse_r2);
            fprintf(fp, "\n");
            break;

        default:
            system("cls");
            printf(">> Invalid, please enter again\n");
            ask_model();
        }
    }
    else if (model == 2)
    {
        printf("\n>> What classification model are you planning to use : \n");
        printf(">> Support Vector Machines (1)\n>> Decision tree classifier (2)\n>> Random forest classifier (3)\n>> K nearest neighbors (4)\n>> XGBoost classifier (5)\n>> Neural networks MLP (6)\n");
        printf(">> Choose : \n-- ");
        scanf("%d", &ans_class);

        switch (ans_class)
        {
        case 1:
            fprintf(fp, svm);
            fprintf(fp, "\n");
            break;

        case 2:
            fprintf(fp, sk_dec_class);
            fprintf(fp, "\n");
            break;

        case 3:
            fprintf(fp, ran_for_class);
            fprintf(fp, "\n");
            break;

        case 4:
            fprintf(fp, k_near_class);
            fprintf(fp, "\n");
            break;

        case 5:
            fprintf(fp, xgboost);
            fprintf(fp, "\n");
            break;

        case 6:
            fprintf(fp, mlp);
            fprintf(fp, "\n");
            break;

        default:
            system("cls");
            printf(">> Invalid, please enter again\n");
            ask_model();
        }
    }
    else
    {
        system("cls");
        printf(">> Invalid input, please select again\n");
        ask_model();
    }
}

extern void scaler()
{
    fprintf(fp, CELL);
    fprintf(fp, "\n");
    fprintf(fp, "scaled_X_train = \n");
    fprintf(fp, "scaled_y_train = \n");
    fprintf(fp, "\n");
}
