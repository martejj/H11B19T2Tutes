#include <stdio.h>


struct pet {
    int age;
    int weight;
    char *name;
    char *breed;
};

void printPet(struct pet p);
void agePet(struct pet *p);
void printInt(int x);

int main(void) {

    struct pet pink;
    
    int a = 0;
    printInt(a);
    
    
    pink.age = 2;
    pink.weight = 10;
    pink.name = "Pink";
    pink.breed = "Some random breed";
    
    printPet(pink);
    
    agePet(&pink);
    
    printPet(pink);
    
    return 0;
}

void agePet(struct pet *p) {
    
    
    p->age = p->age + 1;
    p->weight = p->weight/3.0 + p->weight;
    
}

void printPet(struct pet p) {
    printf("This is a %s called %s whomst is %d years old as weighs %dkg\n", p.breed, p.name, p.age, p.weight);
}
