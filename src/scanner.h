#ifndef IFJ_SCANNER_H
#define IFJ_SCANNER_H

#include <stdlib.h>
#include <stdbool.h>
#include "str.h"

#define EOL '\n'

//types of token
typedef enum{
    TOKEN_ERROR = -1,
    //Keywords
    TOKEN_BOOL = 1,
    TOKEN_TRUE = 2,
    TOKEN_FALSE = 3,
    TOKEN_ELSE = 4,
    TOKEN_FLOAT64 = 5,
    TOKEN_FOR = 6,
    TOKEN_FUNC = 7,
    TOKEN_IF = 8,
    TOKEN_INT = 9,
    TOKEN_PACKAGE = 10,
    TOKEN_RETURN = 11,
    TOKEN_STRING = 12,
    TOKEN_UNDERSCORE = 13,
    TOKEN_PRINT = 44,
    TOKEN_WHILE = 45,
    TOKEN_INPUTI = 46,
    TOKEN_INPUTS = 47,
    TOKEN_LEN = 48,
    TOKEN_SUBSTR = 49,
    TOKEN_ORD = 50,
    TOKEN_CHR = 51,
    TOKEN_INPUTB = 52,
    TOKEN_INPUTF = 53,
    //-----------

    TOKEN_ID = 14, // main
    TOKEN_RBRACKET = 15, // (
    TOKEN_LBRACKET = 16, // )
    TOKEN_RCURLY = 17, // }
    TOKEN_LCURLY = 18, // {
    TOKEN_COMMA = 19, // ,
    TOKEN_SEMICOLON = 20, // ;
    TOKEN_EOL = 21, // eol
    TOKEN_EOF = 22, // eof
    TOKEN_DEFINITION = 23, // :=
    TOKEN_ASSIGN = 24, // =
    TOKEN_INTEGER = 25, // int
    TOKEN_FLOAT = 26, // float
    TOKEN_STR = 27, // str

    TOKEN_NOT = 28, // !
    TOKEN_AND = 29, // &
    TOKEN_OR = 30, // ||
    TOKEN_ADD = 31, // +
    TOKEN_SUB = 32, // -
    TOKEN_MUL = 33, // *
    TOKEN_DIV = 34, // /
    TOKEN_EQL = 35, // ==
    TOKEN_NEQ = 36, // !=
    TOKEN_LT = 37, // <
    TOKEN_GT = 38, // >
    TOKEN_LTE = 39, // <=
    TOKEN_GTE = 40, // >=
    TOKEN_DOT = 41, // .
    TOKEN_LOG = 42, // <>
    TOKEN_LOGE = 43, // <>=

} token_type;



void getToken(int *type, string *actual_value);
void isKeyword(int *type, char *tmp);



//token
typedef struct{
    token_type type;
    string actual_value; //storing int,float,string value
    int lineno; //line number
    int pos; //position of the first char of the token
}token_t;

int get_next_token(token_t* token);

#endif //IFJ_SCANNER_H
