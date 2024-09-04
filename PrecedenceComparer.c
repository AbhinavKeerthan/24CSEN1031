#include <stdio.h>
#include <string.h>

typedef struct {
    char *operator;
    int precedence;
} Operator;

Operator operators[] = {
    {"()", 15},
    {"++", 14}, {"--", 14}, {"!", 14}, {"&", 14},
    {"*", 13}, {"/", 13}, {"%", 13},
    {"+", 12}, {"-", 12},
    {"<<", 11}, {">>", 11},
    {"<", 10}, {"<=", 10}, {">", 10}, {">=", 10},
    {"==", 9}, {"!=", 9},
    {"&", 8},
    {"^", 7},
    {"|", 6},
    {"&&", 5},
    {"||", 4},
    {":?", 3},
    {"=", 2}, {"+=", 2}, // Add other assignment operators as needed
};
int compare_precedence(char *op1, char *op2) {
    int prec1 = -1, prec2 = -1;

    for (int i = 0; i < sizeof(operators) / sizeof(operators[0]); i++) {
        if (strcmp(op1, operators[i].operator) == 0) {
            prec1 = operators[i].precedence;
        }
        if (strcmp(op2, operators[i].operator) == 0) {
            prec2 = operators[i].precedence;
        }
        if (prec1 != -1 && prec2 != -1) break;
    }

    if (prec1 > prec2) return 1; // op1 has higher precedence
    else if (prec1 < prec2) return -1; // op2 has higher precedence
    else return 0; // equal precedence
}
int main() {
    //char *opA;
    //char *opB;
    char *opA = "==";
    //scanf("%s" , &*opA);
    char *opB = "%";
    //scanf("%s" , &*opB);

    int result = compare_precedence(opA, opB);

    if (result > 0)
        printf("Operator %s has higher precedence than %s\n", opA, opB);
    else if (result < 0)
        printf("Operator %s has lower precedence than %s\n", opA, opB);
    else
        printf("Operator %s has equal precedence with %s\n", opA, opB);

    return 0;
}
