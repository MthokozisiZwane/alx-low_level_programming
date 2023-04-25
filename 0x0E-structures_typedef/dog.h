#ifndef DOG_H
#define DOG_H

/**
 * struct dog -contains info on a dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description:creating a struct with the name, age and owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dg;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dg *new_dog(char *name, float age, char *owner);
void free_dog(dg *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
