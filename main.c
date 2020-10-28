#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "structs.h"

int main()
{
    struct client *c;
    char *name_p = "Ethan";
    unsigned int id = 1000;

    c = new_client(id, name_p);

    print_struct(c);

    id = 2000;
    change_id(c, id);

    print_struct(c);

    free(c);
    return 0;
}