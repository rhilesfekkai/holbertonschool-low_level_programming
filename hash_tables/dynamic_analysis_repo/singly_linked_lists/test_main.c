#include <stdio.h>
#include "lists.h"

int main(void)
{
    /* Déclarations des variables au début du bloc */
    list_t hello;
    list_t new;
    size_t n;

    /* Initialisation de hello */
    hello.str = "World";
    hello.len = 5;
    hello.next = NULL;

    /* Initialisation de new */
    new.str = "Hello";
    new.len = 5;
    new.next = &hello;

    /* Appel de print_list et récupération du nombre d'éléments */
    n = print_list(&new);
    printf("-> %lu elements\n", n);

    return (0);
}
