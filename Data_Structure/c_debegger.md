# Using C debegger on VSC

## Using C/C++ extention for VSC

- Install C/C++ extention for VSC
- Build: cmd+shift+p >> type `Run Build Task
- Run and Debug
    - Variable: There are locals and register to check when breakpoint is set.
    - Breakpoints: We con toggle breakpoints and set new one.



## Using LLDB debugger to look at memory
[lldb and memory view - stackoverflow](https://stackoverflow.com/questions/38557168/does-vs-code-have-a-memory-viewer-and-or-a-disassembler-for-c-extension)

Using LLDB (Low-Level Debugger) with Visual Studio Code (VSCode) on a Mac is a powerful way to debug your C++ and other code. Here's a step-by-step guide to set up and use LLDB debugger with VSCode on your Mac:

**Prerequisites:**
1. Ensure you have Visual Studio Code installed on your Mac. You can download it from the [official VSCode website](https://code.visualstudio.com/).

2. Install the LLDB debugger on your Mac if it's not already installed. You can do this using Homebrew, a package manager for macOS. Open Terminal and run:

   ```shell
   brew install lldb
   ```

**Setting up Visual Studio Code:**

1. Install the "C/C++" extension for VSCode. Open VSCode, go to the Extensions view by clicking on the square icon in the sidebar or pressing `Ctrl+Shift+X`, and search for "C/C++" and install it.

2. Create or open a C/C++ project in VSCode. You can use an existing project or create a new one.

**Configuring LLDB Debugger:**

1. Create a `launch.json` configuration file for your project if it doesn't already exist. You can create it by clicking on the gear icon in the Run and Debug sidebar or by pressing `F5`.

2. Select "LLDB" as the debugger in the configuration dropdown.

3. Modify the generated `launch.json` file to specify the necessary settings. Here's an example configuration for a C++ project:

   ```json
    {
        "version": "0.2.0",
        "configurations": [
            {
                "name": "Debug with LLDB",
                "type": "cppdbg",
                "request": "launch",
                "program": "${workspaceFolder}/Data_Structure/assignment1/swap",
                "MIMode": "lldb",
                "cwd": "${workspaceFolder}"
            }
        ]
    }
   ```


In the `program` field of your `launch.json` configuration, you should specify the path to the executable file that you want to debug. Here are the steps to determine the correct value for the `program` field:

   - If you're using a simple setup where the executable is in the same directory as your project or workspace, you can use a relative path. For example:
   
     ```json
     "program": "${workspaceFolder}/my_executable"
     ```

   - If your executable is located in a different directory, you should provide the absolute path. For example:

     ```json
     "program": "/path/to/your/project/build/my_executable"
     ```


**Debugging:**

1. Set breakpoints in your code by clicking in the gutter next to the line numbers where you want to break.

2. Start debugging by pressing `F5` or clicking the green "Start Debugging" arrow in the Run and Debug sidebar.

3. Use the debugging controls in the top menu bar to step through your code, inspect variables, and interact with the LLDB debugger.

That's it! You should now be able to use LLDB debugger with Visual Studio Code on your Mac to debug your C/C++ or other code projects.