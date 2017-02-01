find . -type f -name "*.sh" | sed -E 's/^.+\///' | rev | cut -c4- | rev
