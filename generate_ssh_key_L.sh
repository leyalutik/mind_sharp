#!/bin/bash
#chmod +x ./myscript

git config --global user.email "ludapevek@gmail.com" 
git config --global user.name "leyalutik"
git config --global  core.autocrlf true
git config --global --list
git config --global core.quotepath off 

# Open GIT-BASH

echo Opening ssh-agent

echo 'Generate a SSH key pair (private/public):'

echo 'Creating key files in "C:\Users\User"'
eval "$(ssh-agent -s)"
ssh-keygen -t ed25519 -C "ludapevek@gmail.com"
cd ~/.ssh	
ssh-add id_ed25519

# IF nesceseraly Add a (???)new SSH key to your GitHub account

	
echo 'Coping the SSH public key to your clipboard.'
	
#clip < id_ed25519.pub
alias xclip="xclip -selection c"
#cat id_ed25519.pub | xclip
cat id_ed25519.pub
echo 'Add SSH key to Setting of github account'
firefox https://github.com/settings/keys
read -p "Press enter to continue"

echo "Test the SSH key:"
echo " "
echo "NotaBene: Don't forget Enter \"yes\" instead Enter"
echo " "
#eval "$(ssh-agent -s)"
ssh -T git@github.com
read -p "Press enter to continue"

echo " "
echo Check all processes "ssh-agent" disappered by command ps

echo " "
echo "Push file to your remote repository leyalutik/leya.git"
read -p "Press enter to continue"
echo "Terminate connection"
echo " "



git init
git remote add origin  https://github.com/leyalutik/leya.git
git remote set-url origin git@github.com:leyalutik/leya.git
git add .
git commit -m "$date"
git push -u -f  origin master

echo "Terminate connection"
echo " "
eval "$(ssh-agent -k)"


echo List of opening ssh-processes
echo '{'
ps aux | grep ssh
echo '}'

echo " "
read -p "Press Enter to end"



# if smth was wrong try command
# ssh -Tv git@github.com 



