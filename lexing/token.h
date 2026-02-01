#ifndef TOKEN_H
#define TOKEN_H

typedef enum {
    LPAREN, // (
    RPAREN, // )
    LBRACE, // {
    RBRACE, // }
    KEYWORD,
    IDENTIFIER,
    OPERATOR,
    SEMICOLON,
    FLOAT,
    INT,
    STRING,
    CHAR
} TokenType;

typedef struct {
    char *lexeme;
    TokenType type;
    int position;
    int line;
    void *literal;
} Token;

#endif