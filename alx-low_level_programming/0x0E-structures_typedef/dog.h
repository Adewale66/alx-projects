#ifndef __DOG__
#define __DOG__

/**
 * struct dog - struct for a dog object
 * @age: first member
 * @name: second member
 * @owner: third member
 *
 * Description: dog object
 */

struct dog
{
	float age;
	char *name;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *);

#endif
