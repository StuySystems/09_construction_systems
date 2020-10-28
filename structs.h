#ifndef STRUCTS_H
#define STRUCTS_H

struct client
{
    unsigned int id;
    char name[256];
};

struct client *new_client(unsigned int id, char *name);
void print_struct(struct client *ob);
void change_id(struct client *cl, unsigned int id);

#endif
