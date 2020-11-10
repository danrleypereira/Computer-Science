#ifndef LIBRARY_H
#define LIBRARY_H
#include <stdio.h>
#include <stdlib.h>
#define  MAX_SIZE 10

typedef int* pointer;

typedef struct {
	int info;
	char name[10];
}TypeItem;

typedef struct {
	TypeItem item[MAX_SIZE];
	pointer top;
}TypeList;

int* createList(){
	TypeList* pt;
	return pt;
}

int addItem(TypeList info){
	if(){
		
	}
}
#endif
