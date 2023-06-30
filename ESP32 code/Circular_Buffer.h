/*
 * Circular_Buffer.h
 *
 *  Created on: Nov 18, 2022
 *      Author: r_middelman
 */

#include <stdlib.h>
#include <stdbool.h>
#include <math.h>



#define BUFFER_SIZE 31
#define N 31
#define M (N-1)/2

//make a struct that is gonna be the circular buffer
typedef struct {
    int data[BUFFER_SIZE];
    int head;
    int tail;
    int size;
} circular_buffer_t;


void Init_Circ_Buffer(circular_buffer_t *cb);
bool Is_Circ_Buff_empty(circular_buffer_t *cb);
bool Is_Circ_Buff_full(circular_buffer_t *cb);
void Enqueue(circular_buffer_t *cb, int value);
int Dequeue(circular_buffer_t *cb);
