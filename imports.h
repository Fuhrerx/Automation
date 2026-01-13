#include <stdio.h>
#include <string.h>
#include <ctype.h>

// base

char pd[25] = "import pandas as pd";
char np[25] = "import numpy as np";
char torch[25] = "import torch";
char plt[35] = "import matplotlib.pyplot as plt";
char tts[55] = "from sklearn.model_selection import train_test_split";

// optional

char sns[25] = "import seaborn as sns";

// linear regression

char sk_lin[50] = "from sklearn.linear_model import LinearRegression";
char sk_lin_ridge[50] = "from sklearn.linear_model import Ridge";

void lower(char *str);

void lower(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = (char)tolower(str[i]);
    }
}
