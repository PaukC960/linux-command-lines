# Committing to Github
###  Step 1 : goes to the notes folder
- cd ~directory

###  Step 2 : initialize a git repo locally
- git init

### Step 3 : Add the file and commit
- git add mydir.md
- git commit -m "Add day 2 linux command lines"

### Step 4 : Create a repo on Github
- create new repository on Github account
- keep it public
- do not Initialize with README

### Step 5 : Link local repo to Github
- copy the HTTPS URL from Github
- in terminal,
- git branch -M main
- git remote add origin HTTPS URL

### Step 6 : Push to Github
- git push -u origin main

### Step 7 : Check the Github for the file


### After editing a file
- cd mydir
- git add mydir.md
- git commit -m "message"
- git push
- git status
