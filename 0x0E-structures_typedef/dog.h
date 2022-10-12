#ifndef DOG_H
#define DOG_H
/**
 * struck dog - this structure provides a dog description
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: this structure identifies a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);













#endif
