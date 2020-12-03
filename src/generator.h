#ifndef GENERATOR_H
#define GENERATOR_H


#include "libraries.h"
#include "error.h"
#include "symtable.h"
#include "scanner.h"
#include "str.h"

typedef enum{
    ADDS = 0,
    SUBS = 1,
    MULS = 2,
    DIVS = 3,
    IDIVS = 4,
    LTS = 5,
    GTS = 6,
    EQS = 7,
    ANDS = 8,
    ORS = 9,
    NOTS = 10,
}stack_instruction;

int GTEcounter = 0;
int LTEcounter = 0;
StringList ListOfStrings;

void generate_header();
void generate_start_of_main();
void generate_end_of_main();
void gen_defvar(char* id,int scope, bool in_for);
void gen_retvals(int number_of_return_values);
void gen_move_to_defvar(char* id_of_variable, char* value);
void gen_params(string* params);
void codeGenerator();
void gen_call(char* function);
void gen_return();
void gen_WRITE(char* s1);
void gen_LABEL_start(char* label);
void gen_LABEL_end();
void gen_start_of_function(char* function);
void gen_end_of_function();
void gen_if_start(char* label, int id, char* truefalse);
void gen_if_else(char* label, int id);
void gen_if_end(char* label, int id);
void gen_while_start(char* label, int id);
void gen_while_end(char* label, int id, char* truefalse);
void gen_JUMP(char* destination);
void gen_JUMPIFEQ(char* destination, char* s1, char *s2);
void gen_JUMPIFNEQ(char* destination, char* s1, char *s2);
void gen_stack_GTE();
void gen_stack_LTE();
void gen_stack_instructions(stack_instruction instruction);
void gen_func_inputs();
void gen_func_inputi();
void gen_func_inputf();
void gen_pushs(char* s1);
void gen_pops(char* s1);
void gen_clears();
void gen_add(char* s1, char* s2, char* s3);
void gen_sub(char* s1, char* s2, char* s3);
void gen_mul(char* s1, char* s2, char* s3);
void gen_div(char* s1, char* s2, char* s3);
void gen_idiv(char* s1, char* s2, char* s3);
void gen_LT(char* s1, char* s2, char* s3);
void gen_GT(char* s1, char* s2, char* s3);
void gen_EQ(char* s1, char* s2, char* s3);
void gen_AND(char* s1, char* s2, char* s3);
void gen_OR(char* s1, char* s2, char* s3);
void gen_NOT(char* s1, char* s2, char* s3);
void gen_INT2FLOAT(char* s1, char* s2);
void gen_FLOAT2INT(char* s1, char* s2);
void gen_INT2CHAR(char* s1, char* s2);
void gen_STRI2INT(char* s1, char* s2);
void gen_READ(char* s1, char* s2);
void gen_CONCAT(char* s1, char* s2, char* s3);
void gen_STRLEN(char* s1, char* s2);
void gen_GETCHAR(char* s1, char* s2, char* s3);
void gen_SETCHAR(char* s1, char* s2, char* s3);
void gen_TYPE(char* s1, char* s2);
void gen_EXIT(char* s1);
void gen_BREAK();
void gen_DPRINT(char* s1);
void gen_EOL();

#endif //GENERATOR_H