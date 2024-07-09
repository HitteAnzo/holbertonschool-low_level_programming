#ifndef dog_h
#define dog_h

int _putchar(char c);

/**
 * struct dog - structure datatype
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
