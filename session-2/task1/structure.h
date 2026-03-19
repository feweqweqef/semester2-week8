#ifndef STRUCTURE_H
#define STRUCTURE_H

#define NAME_LENGTH 50
#define NUM_MODULES 3

typedef struct {
    char name[NAME_LENGTH];
    int id;
    float marks[NUM_MODULES];
} Student;

#endif