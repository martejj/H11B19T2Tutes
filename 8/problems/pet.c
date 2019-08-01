#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct _pet {
    int age;
    int weight;
    char *name;
    char *breed;
};

typedef struct _pet Pet;

typedef int size_t;

void printPet(Pet p);
void agePet(Pet *p);
void printInt(int x);

Pet *newPet();

int main(void) {

    printInt(a);
    
    struct _pet *pink = newPet();
    
    pink->age = 2;
    pink->weight = 10;
    pink->name = "Pink";
    pink->breed = "Some random breed";
    
    printPet(*pink);
    
    agePet(pink);
    
    printPet(*pink);
    
    free(pink);
    
    return 0;
}

struct pet *newPet() {
    
    struct pet *new = malloc(sizeof(Pet));
    
    new->name = "Name me dumbass";
    new->breed = "Something";
    new->age = -1;
    new->weight = -1;
    
}

void agePet(struct _pet *p) {
    
    
    p->age = p->age + 1;
    p->weight = p->weight/3.0 + p->weight;
    
}

void printPet(struct _pet p) {
    printf("This is a %s called %s whomst is %d years old as weighs %dkg\n", p.breed, p.name, p.age, p.weight);
}
