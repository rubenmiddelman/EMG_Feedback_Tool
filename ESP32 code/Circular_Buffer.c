/*
 * Circular_Buffer.c
 *
 *  Created on: 18 Nov, 2022
 *      Author: r_middelman
 */
#include "Circular_Buffer.h"


void Init_Circ_Buffer(circular_buffer_t *cb) {
    cb->head = 0;
    cb->tail = 0;
    cb->size = 0;
}

bool Is_Circ_Buff_Empty(circular_buffer_t *cb) {
    return cb->size == 0;
}

bool Is_Circ_Buff_Full(circular_buffer_t *cb) {
    return cb->size == BUFFER_SIZE;
}

void Enqueue(circular_buffer_t *cb, int value) {
    if (!Is_Circ_Buff_Full(cb)) {
        cb->data[cb->tail] = value;
        cb->tail = (cb->tail + 1) % BUFFER_SIZE;
        cb->size++;
    }
}

int Dequeue(circular_buffer_t *cb) {
	int value = cb->data[cb->head];
    cb->head = (cb->head + 1) % BUFFER_SIZE;
    cb->size--;
    return value;
}