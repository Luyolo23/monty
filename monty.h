#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **s, unsigned int line_n);
} instruction_t;
/**
 * struct global - global variables
 * @line_cpy: char array
 * @fptr: file ptr
 * @line: char ptr
 * @s: ptr
 */
typedef struct global
{
	char *line_cpy[20];
	FILE *fptr;
	char *line;
	stack_t *s;
} global_t;
extern global_t global;

void (*op_fun(char *s))(stack_t **s, unsigned int line_n);
void push(stack_t **s, unsigned int line_n);
void pall(stack_t **s, unsigned int line_n);
void pint(stack_t **s, unsigned int line_n);
void pop(stack_t **s, unsigned int line_n);
void swap(stack_t **s, unsigned int line_n);
void add(stack_t **s, unsigned int line_n);
void nop(stack_t **s, unsigned int line_n);
void sub(stack_t **s, unsigned int line_n);
void _div(stack_t **s, unsigned int line_n);
void mul(stack_t **s, unsigned int line_n);
void mod(stack_t **s, unsigned int line_n);
void pchar(stack_t **s, unsigned int line_n);
void pstr(stack_t **s, unsigned int line_n);
void rotl(stack_t **s, unsigned int line_n);
void rotr(stack_t **s, unsigned int line_n);
void parse_line(char *line);
void exit_status(void);

#endif /* MONTY_H */
