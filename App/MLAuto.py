#
# This file serves as the entry point for the application for python scripting. It determines the operating 
# system and loads the appropriate library (either a .dll for Windows or a .so for Unix/Linux) to run the application.
# Use `python main.py` to execute the application. Make sure the corresponding library file is in the same 
# directory as this script.
#
# Use this code for adding future GUI or any other python functions.
#

import ctypes
import os
import sys

# Determine the correct executable/library to load based on OS
if sys.platform == "win32":
    # On Windows, use the .dll file
    dll_path = "App/app.dll"
else:
    # On Unix/Linux, use the .so file
    dll_path = "App/main.so"

# Check if the file exists
if not os.path.exists(dll_path):
    print(f"Error: {dll_path} not found")
    sys.exit(1)

# Execute the appropriate file using ctypes
if sys.platform == "win32":
    # On Windows, use ctypes to load the .dll file
    lib = ctypes.CDLL(dll_path)
    lib.app()
    sys.exit(0)
else:
    # On Unix/Linux, use ctypes to load the .so file
    lib = ctypes.CDLL(dll_path)
    lib.app()
    sys.exit(0)
