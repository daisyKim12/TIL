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

* unmodified
* modified
* staged

