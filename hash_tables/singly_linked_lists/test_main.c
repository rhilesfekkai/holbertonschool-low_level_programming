#include <stdio.h>
#include "lists.h"

int main(void)
{
    list_t hello;
    list_t new;

    // Initialisation de hello
    hello.str = "World";
    hello.len = 5;
    hello.next = NULL;

    // Initialisation de new
    new.str = "Hello";
    new.len = 5;
    new.next = &hello;

    size_t n;

    n = print_list(&new);
    printf("-> %lu elements\n", n);

    n = list_len(&new);
    printf("-> %lu elements\n", n);

    return 0;
}
