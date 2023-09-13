#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SUCCESS 1
#define FAIL 0

typedef enum {
  Num = 0,
  Plus = 1,
  Minus = 2,
  Multi = 3,
  Division = 4,
  Mod = 5,
  Power = 6,
  Sqrt = 7,
  Ln = 8,
  Log = 9,
  Sin = 10,
  Cos = 11,
  Tan = 12,
  Asin = 13,
  Acos = 14,
  Atan = 15,
  Lbracket = 16,
  Rbracket = 17,
  X = 18
} type_t;

typedef struct stack_t {
  long double value;
  int priority;
  type_t type;
  struct stack_t* next;
} stack;

/* priority 
num = 0
+-  = 1
* / = 2
mod = 3
^   = 4
fun = 5 
()  = 6
*/


stack* init();
void push(stack** top, long double value, int priority, type_t type);
void pop(stack**);
void delete_stack (stack**);
void print_stack(stack* top);

void delete_spaces(char* input_raw, char* input);
int validator(char* input_raw, char* input);
int is_real(char*);
int is_digit(char);
int is_bracket(char*);
int is_permissible(char*);
int is_function(char*);
stack* parse(stack**, char*);
stack* stack_reverse(stack**);
stack* polish(stack** general);

double calculation(stack* output);
double s21_smartcalc(char* input_raw, int X_count, int* y_coord);
void binary_calc(stack*, stack**);
void unary_calc(stack*, stack**);
void transfer(stack*, stack**);

char *replace_xs(char* input_raw, int i);