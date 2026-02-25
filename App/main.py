#
# This file serves as the entry point for the application for python scripting. It determines the operating 
# system and loads the appropriate library (either a .exe for Windows or a .so for Unix/Linux) to run the application.
# Use `python main.py` to execute the application. Make sure the corresponding library file is in the same 
# directory as this script.
#
# Use this code for adding future GUI or any other python functions.
#

import ctypes
import os
import sys
import subprocess

# Determine the correct library to load based on OS
if sys.platform == "win32":
    # On Windows, use the .exe file
    exe_path = "./MLAuto.exe"
else:
    # On Unix/Linux, use the .so file
    dll_path = "./main.so"

# Check if the file exists
if sys.platform == "win32":
    if not os.path.exists(exe_path):
        print(f"Error: {exe_path} not found")
        sys.exit(1)
    
    # Run the executable using subprocess
    result = subprocess.run([exe_path], capture_output=False)
    sys.exit(result.returncode)
else:
    if not os.path.exists(dll_path):
        print(f"Error: {dll_path} not found")
        sys.exit(1)
    
    # On Unix/Linux, load the .so file as a DLL
    app = ctypes.CDLL(dll_path)
    app.app.restype = ctypes.c_int
    sys.exit(app.app())
