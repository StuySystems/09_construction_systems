#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "structs.h"

int main()
{
    srand(time(NULL));
    char *name = "Ethan";
    char *new_name = "Jackson";
    int id = rand();

    struct client *new_c = new_client(id, name);

    struct client new_client;

    new_client.name = name;
    new_client.id = id;

    struct client *new_c_p = &new_client;

    change_id(new_c_p, rand());
    change_name(new_c_p, new_name);
    print_struct(new_c_p);

    //free(new_c_p);
    return 0;
}