#!/bin/bash
git rm *\~
rm *\~
git add .
git commit -m "EMPTY"
git rm *\~
git push origin master
