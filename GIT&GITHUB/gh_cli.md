# gh 

## What is gh 
To use Git and GitHub (often referred to as "gh") in the terminal, you need to have Git and the GitHub CLI (Command Line Interface) installed on your system. 

## How to install gh
In mac OS using homebrew is a good idea.

```
brew install gh
```

**check gh version**
```
gh --version
```

## Authenticate with GitHub
Before you can use gh, you need to authenticate with your GitHub account.

```
gh auth login
```

Follow the prompts to log in to your GitHub account. You can choose between various authentication methods, such as using a web browser or a personal access token.

## Create repository
On creating a repository you must add some options
[gh repo create](https://cli.github.com/manual/gh_repo_create)
**create repository**
```
gh repo create {repository-name} --public --clone --add-readme --description "repository description"
```

**clone repository**
```
gh repo clone username/repository-name
```

**deleting cloned repository**
```
cd <project_name>
rm -rf <repository_folder>.git 

rm -rf <folder_name>
```

## Process of Commit

**Stage your changes**
```
git add .
```
This command stages all changes in the current directory for the next commit. You can also specify individual files if needed.

**check git status**
Check git status to make sure all changes have been staged.
```
git status
```

**commit changes with message**
```
git commit -m "Your commit message here"
```

**push**
```
git push origin main
```

If there is a file with large object you need to track that file using git lfs

```
git lfs track "path/to/your/large/file.zip"

git add .
git commit -m "Add large file using Git LFS"
git push origin main

```
