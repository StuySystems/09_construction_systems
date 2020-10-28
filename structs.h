#ifndef STRUCTS_H
#define STRUCTS_H

struct client
{
    unsigned int id;
    char *name;
};

struct client *new_client(unsigned int id, char *name);
void print_struct(struct client *ob);
void change_id(struct client *cl, unsigned int id);
void change_name(struct client *cl, char *name);

#endif
