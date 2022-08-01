#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include "dog.h"
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
