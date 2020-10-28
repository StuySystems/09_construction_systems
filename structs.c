#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"

struct client *new_client(unsigned int id, char *name)
{
    struct client *nc;
    nc = malloc(sizeof(struct client));
    nc->id = id;
    strncpy(nc->name, name, sizeof(nc->name) - 1);

    return nc;
}

void print_struct(struct client *cl)
{
    printf("Client ID %d assigned to patient %s\n", cl->id, cl->name);
    return;
}

void change_id(struct client *cl, unsigned int id)
{
    cl->id = id;
    return;
}