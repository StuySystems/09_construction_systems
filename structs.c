#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"

struct client *new_client(unsigned int id, char *name)
{
    struct client *nc;
    nc->id = id;
    strncpy(nc->name, name, sizeof(nc->name) - 1);

    return nc;

    void print_struct(struct client * ob)
    {
        printf("Client ID %ud assigned to patient %p\n", ob->id, ob->name);
        return;
    }

    void change_id(struct client * cl, unsigned int id)
    {
        cl->id = id;
        return;
    }

    void change_name(struct client * cl, char *name)
    {
        cl->name = name;
        return;
    }