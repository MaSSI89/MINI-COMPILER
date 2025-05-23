#ifndef TS_H
#define TS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure definitions
typedef struct element {
    int state;
    char name[20];
    char code[20];
    char type[20];
    float val;
    struct element* next;
} element;

typedef struct elt {
    int state;
    char name[20];
    char type[20];
    struct elt* next;
} elt;

// Hash table sizes
#define HASH_SIZE_IDF 100
#define HASH_SIZE_KW 20
#define HASH_SIZE_SEP 20

// External declarations of the hash tables
extern element* tab[HASH_SIZE_IDF];
extern elt* tabm[HASH_SIZE_KW];
extern elt* tabs[HASH_SIZE_SEP];

// Function prototypes
unsigned int hash_function(const char* str);
void initialisation(void);
void inserer(char entite[], char code[], char type[], float val, int y);
void rechercher(char entite[], char code[], char type[], float val, int y);
void afficher(void);

#endif