#!/bin/bash
git add .
git rm *\~
rm *\~
git rm !*.cpp
git commit -m "EMPTY"
git rm *\~
git push origin master
