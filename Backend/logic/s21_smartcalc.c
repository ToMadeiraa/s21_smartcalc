#include "../s21_smartcalc.h"

// int main(){
//   char input[] = "0";
//   long double result = s21_smartcalc(input);
//   printf("RESULT = %Lf\n", result);
//   return 0;
// }

// int main() {
//   char input_raw[256];
//   char input[256];
//   // stack* top = NULL;
//   printf("type calc:\n");
//   fgets(input_raw, 256, stdin);
//   if (validator(input_raw, input)){
//     printf("converted input:\n");
//     printf("%s\n", input);
//     stack* general_inversed = parse(&general_inversed, input);
//     stack* general = stack_reverse(&general_inversed);
//     // print_stack(general);
//     stack* output = polish(&general);
//     // printf("outpush:\n");
//     // print_stack(output);
//     stack* output_for_calc = stack_reverse(&output);
//     long double result = calculation(output_for_calc);
//     printf("RESULT = %Lf\n", result);
//     delete_stack(&output);
//   }
//   /* операция невидимое умножение */
    // /* ставить любое +-число в (0+-число) */
//   return 0;
// }

double s21_smartcalc(char* input_raw, int X_count, int* y_coord) {
  long double result = 0;
  if (X_count == 0) {
    char input[256];
    if (validator(input_raw, input)){
      stack* general_inversed = NULL;
      stack* general = NULL;
      stack* output = NULL;
      stack* output_for_calc = NULL;
      general_inversed = parse(&general_inversed, input);
      general = stack_reverse(&general_inversed);
      output = polish(&general);
      output_for_calc = stack_reverse(&output);
      result = calculation(output_for_calc);
      delete_stack(&output);
    }
    else result = -999;
    for (int i = 0; i < 2000001; i++) {
      y_coord[i] = result;
    }




  } else if (X_count > 0) {
    result = -123456789;
    /*for (int i = 123; i < 124; i++) {
      char real_input_raw[512];
      char tmp[8];
      sprintf(tmp, "%d", i);
      int indx_tmp = 0;
      int indx_raw = 0;
      int indx_real = 0;
      while (input_raw[indx_raw] != '\0') {
        if (input_raw[indx_raw] != 'x') {
          real_input_raw[indx_real] = input_raw[indx_raw];
          indx_real++;
          indx_raw++;
        } else {
          while (tmp[indx_tmp] != '\0') {
            real_input_raw[indx_real] = tmp[indx_tmp];
            indx_tmp++;
            indx_real++;
          }
        }
      }
      char input[256];
      if (validator(real_input_raw, input)){
        stack* general_inversed = NULL;
        stack* general = NULL;
        stack* output = NULL;
        stack* output_for_calc = NULL;
        general_inversed = parse(&general_inversed, input);
        general = stack_reverse(&general_inversed);
        output = polish(&general);
        output_for_calc = stack_reverse(&output);
        result = calculation(output_for_calc);
        delete_stack(&output);
      }
      else result = -999;
      for (int i = 0; i < 2000001; i++) {
        y_coord[i] = result;
      }
    }*/
  }
  return result;
}

void transfer(stack* output, stack** result){
  long double value = output->value;
  int priority = output->priority;
  type_t type = output->type;
  push(result, value, priority, type);
}

void unary_calc(stack* output, stack** result){
  if (output->next->type == 7){
    long double value = sqrt(output->value);
    push(result, value, 0, 0);
  }
  if (output->next->type == 8){
    long double value = log(output->value);
    push(result, value, 0, 0);
  }
  if (output->next->type == 9){
    long double value = log10(output->value);
    push(result, value, 0, 0);
  }
  if (output->next->type == 10){
    long double value = sin(output->value);
    push(result, value, 0, 0);
  }
  if (output->next->type == 11){
    long double value = cos(output->value);
    push(result, value, 0, 0);
  }
  if (output->next->type == 12){
    long double value = tan(output->value);
    push(result, value, 0, 0);
  }
  if (output->next->type == 13){
    long double value = asin(output->value);
    push(result, value, 0, 0);
  }
  if (output->next->type == 14){
    long double value = acos(output->value);
    push(result, value, 0, 0);
  }
  if (output->next->type == 15){
    long double value = atan(output->value);
    push(result, value, 0, 0);
  }
}

void binary_calc(stack* output, stack** result){
  if (output->next->next->type == 1){
    long double value = output->value + output->next->value;
    push(result, value, 0, 0);
  }
  else if (output->next->next->type == 2){
    long double value = output->value - output->next->value;
    push(result, value, 0, 0);
  }
  else if (output->next->next->type == 3){
    long double value = output->value * output->next->value;
    push(result, value, 0, 0);
  }
  else if (output->next->next->type == 4){
    long double value = output->value / output->next->value;
    push(result, value, 0, 0);
  }
  else if (output->next->next->type == 5){
    long double value = fmod(output->value, output->next->value);
    push(result, value, 0, 0);
  }
  else if (output->next->next->type == 6){
    long double value = pow(output->value, output->next->value);
    push(result, value, 0, 0);
  }
}

double calculation(stack* output){
  long double num = 0;
  stack* result = NULL;
  // print_stack(output);
  while(output){
    result = NULL;
    while(output){
      if (output || output->next || output->next->next){
        if (output->next && output->type == 0 && (output->next->type > 6 && output->next->type < 16)){
          unary_calc(output, &result);
          output = output->next->next;
        }
        else if (output->next && output->next->next && output->type == 0 && output->next->type == 0 && (output->next->next->type > 0 && output->next->next->type < 7)){
          binary_calc(output, &result);
          output = output->next->next->next;
        }
        else if ((output->type == 0 && output->next && (output->next->type > 0)) || output->type > 0){   
          transfer(output, &result);
          output = output->next;
        }
        // else if (output && output->next == 0){
        //   printf("case 4\n");
        //   transfer(output, &result);
        //   output = output->next;
        // }
        else if (output){
          transfer(output, &result);
          output = output->next;
        }
      }
    }
    if (result->next == 0){
      num = result->value;
    }
    output = stack_reverse(&result);
    if (output->next == 0){
      break;
    }
  }
  return (num);
}

stack* polish(stack** general){
    stack* output = NULL;
    stack* aux = NULL;
    while (*general){
      if ((*general)->type == 0)
        push(&output, (*general)->value, (*general)->priority, (*general)->type); 
      else if ((*general)->type == 16)
        push(&aux, (*general)->value, (*general)->priority, (*general)->type);
      else if ((*general)->type == 17){
        while (aux->type != 16){
          push(&output, aux->value, aux->priority, aux->type);
          pop(&aux);
        }
        pop(&aux);
      }
      else if (aux != NULL && (*general)->priority > 0 && (*general)->priority > aux->priority)
        push(&aux, (*general)->value, (*general)->priority, (*general)->type);
      else if (aux == NULL && (*general)->priority > 0)
        push(&aux, (*general)->value, (*general)->priority, (*general)->type);   
      else if ((*general)->priority > 0 && (*general)->type != 16 && (*general)->type != 17 && (*general)->priority <= aux->priority){
        while ((aux) && ((*general)->priority <= aux->priority)){
          push(&output, aux->value, aux->priority, aux->type);
          pop(&aux);
        }
        push(&aux, (*general)->value, (*general)->priority, (*general)->type);
      }        
      pop(general);
    }
    while (aux){
      push(&output, aux->value, aux->priority, aux->type);
      pop(&aux);
    }
    delete_stack(&aux);
    return (output);
}

stack* stack_reverse(stack** top){
  stack* tmp = NULL;
  while (*top){
    push(&tmp, (*top)->value, (*top)->priority, (*top)->type);
    pop(top);
  }
  delete_stack(top);
  return tmp;
}

stack* parse(stack** top, char* input){
  while (*input != '\0'){
    if (is_digit(*input)){
      char num[256];
      char* p_num = num;
      while (is_digit(*input) || *input == '.'){
        *p_num++ = *input++;
      }
      *p_num = '\0';
      push(top, atof(num), 0, 0);
    }
    else if (*input == '+'){
      push(top, -1, 1, 1);
      input++;
    }
    else if (*input == '-'){
      push(top, -1, 1, 2);
      input++;
    }
    else if (*input == '*'){
      push(top, -1, 2, 3);
      input++;
    }
    else if (*input == '/'){
      push(top, -1, 2, 4);
      input++;
    }
    else if (*input == 'm'){
      push(top, -1, 3, 5);
      input += 3;
    }
    else if (*input == '^'){
      push(top, -1, 4, 6);
      input++;
    }
    else if (*input == 's' && *(input + 1) == 'q'){
      push(top, -1, 5, 7);
      input += 4;
    }
    else if (*input == 'l' && *(input + 1) == 'n'){
      push(top, -1, 5, 8);
      input += 2;
    }
    else if (*input == 'l' && *(input + 1) == 'o'){
      push(top, -1, 5, 9);
      input += 3;
    }
    else if (*input == 's' && *(input + 1) == 'i'){
      push(top, -1, 5, 10);
      input += 3;
    }
    else if (*input == 'c' && *(input + 1) == 'o'){
      push(top, -1, 5, 11);
      input += 3;
    }
    else if (*input == 't' && *(input + 1) == 'a'){
      push(top, -1, 5, 12);
      input += 3;
    }
    else if (*input == 'a' && *(input + 1) == 's'){
      push(top, -1, 5, 13);
      input += 4;
    }
    else if (*input == 'a' && *(input + 1) == 'c'){
      push(top, -1, 5, 14);
      input += 4;
    }
    else if (*input == 'a' && *(input + 1) == 't'){
      push(top, -1, 5, 15);
      input += 4;
    }
    else if (*input == '('){
      push(top, -1, -1, 16);
      input++;
    }
    else if (*input == ')'){
      push(top, -1, -1, 17);
      input++;
    }
    else if (*input == 'x'){
      push(top, -1, 0, 18);
      input++;
    }
  }
  return *top;
}

int validator(char* input_raw, char* input) {
  int result = SUCCESS;
  delete_spaces(input_raw, input);
  // printf("input without spaces: %s\n", input);
  if (!is_permissible(input) || !is_real(input) || !is_bracket(input) ||
      !is_function(input)) {
    result = FAIL;
  }
  // printf("validate result = %i\n", result);
  return result;
}

int is_function(char* input) {
  int result = SUCCESS;
  while (*input != '\0') {
    if (*input == 'm') {
      if ((*(input + 1) == 'o') && (*(input + 2) == 'd') &&
          (is_digit(*(input + 3)) || (*(input + 3) == '(') ||
           (*(input + 3) == 'x') || (*(input + 3) == 'l') || (*(input + 3) == 'a') || (*(input + 3) == 'c') || (*(input + 3) == 's') || (*(input + 3) == 't'))) {
      } else
        result = FAIL;
    } else if (*input == 'l') {
      if ((*(input + 1) == 'n' && (*(input + 2) == '(')) ||
          (*(input + 1) == 'o' && *(input + 2) == 'g' &&
           (*(input + 3) == '('))) {
      } else
        result = FAIL;
    } else if (*input == 'c') {
      if (*(input + 1) == 'o' && *(input + 2) == 's' && *(input + 3) == '(') {\
      } 
      else if (*(input - 1) == 'a' && *(input + 1) == 'o' && (*(input + 2) == 's') && (*(input + 3) == '(')) {
      }
      else
          result = FAIL;
    }
    else if (*input == 't'){
      if (*(input - 1) != 'r' && *(input + 1) == 'a' && *(input + 2) == 'n' && *(input + 3) == '('){
      }
      else if (*(input - 3) == 's' && *(input - 2) == 'q' && *(input - 1) == 'r' && *(input + 1) == '('){
      }
      else 
        result = FAIL;
    }
    else if (*input == 's') {
      if ((*(input + 1) == 'i' && (*(input + 2) == 'n') && (*(input + 3) == '(')) ||
          (*(input + 1) == 'q' && (*(input + 2) == 'r') && (*(input + 3) == 't') && (*(input + 4) == '('))) {
      }
      else if (*(input - 1) == 'a' && *(input + 1) == 'i' && (*(input + 2) == 'n') && (*(input + 3) == '(')){
      }
      else if (*(input - 3) == 'a' && *(input - 2) == 'c' && (*(input - 1) == 'o') && (*(input + 1) == '(')){
      }
      else if (*(input - 2) == 'c' && (*(input - 1) == 'o') && (*(input + 1) == '(')){
      }
       else
          result = FAIL;
    }
    else if (strchr("+-*/^", *input)){
      char* pool = "0123456789x(acsltm";
      if (strchr(pool, *(input + 1))){
      }
      else 
        result = FAIL;
    }
    input++;
  }
  // printf("is_function result = %i\n", result);
  return result;
}

int is_permissible(char* input) {
  int result = SUCCESS;
  const char* pool = "acdgilmnorqstx0123456789()+-*/^.";
  const char* pool_2 = "(+-*/^.";
  while (*input != '\0') {
    if (!strchr(pool, *input)) {
      printf("fail = %c\n", *input);
      result = FAIL;
    }
    else if (strchr(pool_2, *input) && *(input + 1) == '\0'){
      result = FAIL;
    }
    input++;
  }
  // printf("is_permissible result = %i\n", result);
  return result;
}

int is_bracket(char* input) {
  int result = SUCCESS;
  const char* pool = "aclmstx0123456789(+-*/^";
  int count_left = 0;
  int count_right = 0;
  while (*input != '\0') {
    if (*input == '(' && strchr(pool, *(input + 1)))
      count_left++;
    else if (*input == ')')
      count_right++;
    input++;
  }
  if (count_left != count_right) result = FAIL;
  // printf("is_bracket result = %i\n", result);
  return result;
}

int is_real(char* input) {
  int result = SUCCESS;
  while (*input != '\0') {
    if ((*input == '.') && (!is_digit(*(input + 1)) || !is_digit(*(input - 1)))) result = FAIL;
    input++;
  }
  // printf("is_real result = %i\n", result);
  return result;
}

void delete_spaces(char* input_raw, char* input) {
  char tmp[256];
  char* ptr_tmp = tmp;
  char* p_tmp = tmp;
  while (*input_raw != '\0') {
    if (*input_raw != ' ' && *input_raw != '\n') {
      *ptr_tmp = *input_raw;
      ptr_tmp++;
    }
    input_raw++;
  }
  *ptr_tmp = '\0';
  /* добавление числа 0 */
  if ((*p_tmp == '+' || *p_tmp == '-') && is_digit(*(p_tmp + 1))){
    *input++ = '0';
  }
  while(*p_tmp){
    if ((*(p_tmp - 1) == '(') && (*p_tmp == '+' || *p_tmp == '-') && is_digit(*(p_tmp + 1))){
      *input++ = '0';
      if (*p_tmp == '+'){
        *input++ = '+';
      }
      else if (*p_tmp == '-'){
        *input++ = '-';
      }
      p_tmp++;
    }
    else {
      *input++ = *p_tmp++;
    }
  }
  *input = '\0';
}

int is_digit(char input) {
  int result = SUCCESS;
  if ('0' > input || input > '9') result = FAIL;
  return result;
}

void push(stack** top, long double value, int priority, type_t type) {
  stack* tmp = malloc(sizeof(stack));
  tmp->value = value;
  tmp->priority = priority;
  tmp->type = type;
  tmp->next = *top;
  *top = tmp;
}

void pop(stack** top) {
  stack* tmp = *top;
  *top = (*top)->next;
  free(tmp);
}

void delete_stack (stack** top) {
  while (*top) {
    pop(top);
  }
}

stack* init() {
  stack* initializer = NULL;
  initializer = malloc(sizeof(stack));
  initializer->value = 0;
  initializer->next = NULL;
  return initializer;
}

void print_stack(stack* top){
  if (!top) printf("empty\n");
  while(top){
    printf("value = %Lf, priority = %i, type = %i\n", (top)->value, (top)->priority, (top)->type);
    top = top->next;
  }
}

char *replace_xs(char* input_raw, int i);