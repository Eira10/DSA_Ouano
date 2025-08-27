#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 10

typedef struct {

    int elem[MAX];
    int count;

} List;

List L;

List initialize(List L){

    L.count = 0;
    return L;

}

List insertPos(List L, int data, int position){

int a;

    if(position <= L.count && L.count < MAX){

        for(a = L.count; a > position; a--){

            L.elem[a] = L.elem[a + 1];
            
        }

        L.elem[position] = data;

        L.count++;

    } else {

        printf("Invalid position");

    }

    return L;

}

List deletePos(List L, int pos){

    int a;

    if(pos <= L.count && L.count < MAX){

        for(a = pos; a < L.count; a++){

            L.elem[a + 1] = L.elem[a];

        }

        L.count --;

    } else {

        printf("Invalid position");

    }
}

int locate(List L, int data){

    int a;

        for(a = 0; a < L.count; a++){

            if(a = data){

                printf("Found");

        } else {

            return -1;

        }

        }

}