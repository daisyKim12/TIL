All About Using Git




## Staging and Commit

### Working Directory, .git directory

### Working Directory, Staging Area, Repository


### git init

### git status

## git add

## git commit -m

## git log


## File Status
Git keeps track of files it supervises. By looking the file status one can understand where the file is located in managment stages, and can know which job can be done.

![File Status Stages](https://i.stack.imgur.com/MRkpH.png)

> __Cuation__ Git only tracks the file that has been commited.

### Working Directory - tracked vs untracked
Using git status command one can see file status
```
git status
```

* `tracked`: Meaning that this file is tracked by git. So if you modify the file it will show as `modified`. Tracked file is file that has been commite.
* `untracked`: Meaning that this file is newly created and never been commit to git. After `git add` it will show as `new file`

### Tracked File - unmodified vs modified vs staged
Files managed by git has one of these file status. 
Using git status command one can see file status
```
git status
```

* unmodified: Files with no change after commit will show as `nothing to commit, working tree clean` and file will be marked as `unmodified`
* modified: After changing the file this message will show 'changes not staged for commit` and file will be marked as `modified`
* staged: After using `git add` command this message will show 'changes to be commited` and file will be marked as `modified`

## git with vscode
First one must install git
[install git](https://git-scm.com/download/win)

Add git to path in order to use git in terminal
[git 환경변수 등록](https://wtg-study.tistory.com/84)
1. Open Control Panel
2. System Settings: In the Control Panel, search for "System" and click on the "System" link.
3. Advanced System Settings: In the left sidebar, click on "Advanced system settings." This will open the "System Properties" window.
4. Environment Variables: In the "System Properties" window, click on the "Environment Variables" button at the bottom right.
5. Edit PATH Variable: In the "Environment Variables" window, under the "System variables" section, find and select the "Path" variable. Click the "Edit" button.
6. Add Git's bin Folder:
   ```C:\Program Files\Git\bin```
7. Save Changes:
8. After adding the path to Git's bin folder, click "OK" to close each of the windows.
9. Restart Command Prompt:

Add username and user email using terminal
```
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
git config --global --list
```

Clone Repository
1. `Ctrl`+`Shift`+P
2. Git clone
3. Enter repository Url
4. Open not make new

Push changes from VSC to Github
1. Open the Cloned Repository in VS Code: Open Visual Studio Code and click on "File" > "Open Folder..." to navigate to the directory where you cloned the repository. Select the repository folder and click "Open."
2. Make and Save Changes: Make the changes you want to commit within the VS Code editor. Make sure to save your changes by clicking on "File" > "Save" or using the keyboard shortcut (usually Ctrl + S or Cmd + S).
3. Source Control Panel: Click on the "Source Control" icon on the left sidebar of VS Code. It looks like a small version control icon (three interconnected circles).
4. Review Changes: In the Source Control panel, you'll see a list of changed files. Click on each file to review the changes you've made.
5. Stage Changes: Click the + icon next to each changed file to stage the changes. Staging prepares the changes for the commit.
6. Enter Commit Message: After staging the changes, you'll see a text box at the top of the Source Control panel. Enter a meaningful commit message describing the changes you made.
7. Commit Changes:Click the checkmark icon (✓) in the text box or press Ctrl + Enter (or Cmd + Enter) to commit the changes. This records your changes locally.
8. Push Changes to GitHub: After committing, you'll see an icon with an arrow pointing upward (↑) in the Source Control panel. Click on it to push your committed changes to GitHub. If prompted, log in to your GitHub account.
