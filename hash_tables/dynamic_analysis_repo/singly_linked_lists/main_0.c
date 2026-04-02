#include <stdio.h>
#include "lists.h"

int main(void)
{
    list_t *head = NULL;
    const char *strings[] = {
        "Anne", "Colton", "Corbin"
    };
    size_t i;

    for (i = 0; i < 3; i++)
        add_node_end(&head, strings[i]); /* pas de ptr inutile */

    print_list(head);

    return (0);
}
