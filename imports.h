#include <stdio.h>
#include <string.h>
#include <ctype.h>

// base

char pd[25] = "import pandas as pd";
char np[25] = "import numpy as np";
char torch[25] = "import torch";
char plt[35] = "import matplotlib.pyplot as plt";
char tts[55] = "from sklearn.model_selection import train_test_split";
char as[60] = "from sklearn.metrics import accuracy_score, f1_score";

// optional

char sns[25] = "import seaborn as sns";
char mse_r2[60] = "from sklearn.metrics import mean_squared_error, r2_score";

// linear regression

char sk_lin[50] = "from sklearn.linear_model import LinearRegression";

// ridge

char sk_lin_ridge[50] = "from sklearn.linear_model import Ridge";

// log regression

char sk_log[60] = "from sklearn.linear_model import LogisticRegression";

// decision tree class

char sk_dec_class[50] = "from sklearn.tree import DecisionTreeClassifier";

// decision tree regressor

char sk_dec_reg[50] = "from sklearn.tree import DecisionTreeRegressor";

// XGBoost class

char xgboost_class[50] = "from xgboost import XGBClassifier";

// XGBoost regressor

char xgboost_reg[50] = "import xgboost as xgb";

// random forest class

char ran_for_class[60] = "from sklearn.ensemble import RandomForestClassifier";

// random forest regressor

char ran_for_reg[50] = "from sklearn.ensemble import RandomForestRegressor";

// k means clustering

char k_means_cluster[50] = "from sklearn.cluster import KMeans";

// k near neighbors class

char k_near_class[50] = "from sklearn.neighbors import KNeighborsClassifier";

// k near neighbors regressor

char k_near_reg[50] = "from sklearn.neighbors import KNeighborsRegressor";

// lowercase func

extern void lower(char *str);

extern void lower(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = (char)tolower(str[i]);
    }
}
