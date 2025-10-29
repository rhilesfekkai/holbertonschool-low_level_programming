mkdir isupper_project
cd isupper_project
cat > main.h << 'EOF'


reset

mkdir isupper_project
cd isupper_project
cat > main.h << 'EOF'
#ifndef MAIN_H
#define MAIN_H
int _isupper(int c);
#endif
EOF

cat > 0-isupper.c << 'EOF'
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: The character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}
EOF

cat > 0-main.c << 'EOF'
#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
EOF

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
./0-isuper
git init
git add .
git commit -m "Add _isupper function"
git config --global user.name "rhilesfekkai"
git push
pwd
git status
git commit -m "Add _isupper function"
git branch -M main
git remote add origin https://github.com/<rhilesfekkai>/isupper_project.git
git remote add origin https://github.com/rhilesfekkai/isupper_project.git
git remote -v
git push -u origin main
git remote set-url origin https://github.com/rhilesfekkai/isupper_project.git
git push -u origin main
ls ~/Documents
pwd
ls ~/Documents
ls /Users/nouvellelifedurams/Documents
mkdir -p /Users/nouvellelifedurams/Documents
ls
git status
pwd
ls -a
git init
git status
cd /root
rm -rf .git
cd ~/isdigit_project
git init
