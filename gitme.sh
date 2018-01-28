#!/bin/sh
git add *
git status
read -p "Are you sure you want to push?" -n 1 -r
if [[  $REPLY =~ ^[Yy]$ ]]
then
	git commit -m "$1"
	git push
	echoe "\n Commit Completed"
else
	echo "\nABORDED"
fi
