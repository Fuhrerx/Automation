//
// Use python naming rules for each python library imports
//
// For scikitlearn modules
//

#pragma once

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// base

const char pd[25] = "import pandas as pd";
const char np[25] = "import numpy as np";
const char plt[35] = "import matplotlib.pyplot as plt";
const char tts[55] = "from sklearn.model_selection import train_test_split";
const char as[60] = "from sklearn.metrics import accuracy_score, f1_score";
const char sc[50] = "from sklearn.preprocessing import StandardScaler";

// optional

const char sns[25] = "import seaborn as sns";
const char mse_r2[60] = "from sklearn.metrics import mean_squared_error, r2_score";

// linear regression

const char sk_lin[50] = "from sklearn.linear_model import LinearRegression";

// ridge

const char sk_lin_ridge[50] = "from sklearn.linear_model import Ridge";

// log regression

const char sk_log[60] = "from sklearn.linear_model import LogisticRegression";

// decision tree class

const char sk_dec_class[50] = "from sklearn.tree import DecisionTreeClassifier";

// decision tree regressor

const char sk_dec_reg[50] = "from sklearn.tree import DecisionTreeRegressor";

// XGBoost

const char xgboost[50] = "import xgboost as xgb";

// random forest class

const char ran_for_class[60] = "from sklearn.ensemble import RandomForestClassifier";

// random forest regressor

const char ran_for_reg[50] = "from sklearn.ensemble import RandomForestRegressor";

// k means clustering

const char k_means_cluster[50] = "from sklearn.cluster import KMeans";

// k near neighbors class

const char k_near_class[50] = "from sklearn.neighbors import KNeighborsClassifier";

// k near neighbors regressor

const char k_near_reg[50] = "from sklearn.neighbors import KNeighborsRegressor";

// lasso

const char lasso[50] = "from sklearn.linear_model import Lasso";

//  elastic net

const char elastic[50] = "from sklearn.linear_model import ElasticNet";

// svr

const char svr[30] = "from sklearn.svm import SVR";

// svm

const char svm[40] = "from sklearn.svm import SVC";

// mlp

const char mlp[50] = "from sklearn.neural_network import MLPClassifier";
