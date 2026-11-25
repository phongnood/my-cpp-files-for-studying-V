#!/usr/bin/env bash
set -e
git add .
git commit -m "my 'new' stuffs :V" || echo "Nothing to commit"
git push
echo "Successfully added and pushed to github!"


