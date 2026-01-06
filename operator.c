1. Operator and Operand

Operator → A symbol that tells the compiler to perform a specific operation.

Operand → The data or variables on which the operation is performed.

Example:
int a = 5, b = 3;
int c = a + b;


+ → Operator (performs addition)

a and b → Operands (the values being added)

c → stores the result

Think of it as: Operand Operator Operand → Result

2. Precedence of Operators

Precedence determines the order in which operators are evaluated in an expression.

Operators with higher precedence are evaluated first.

Parentheses () have the highest precedence.

Common Precedence Table (High → Low)
Precedence	Operator(s)	Description	Example
1	()	Parentheses	(a + b) * c
2	++, --, !, ~	Unary operators	++a, !flag
3	*, /, %	Multiplication, division, modulo	a * b / c
4	+, -	Addition and subtraction	a + b - c
5	<, <=, >, >=	Relational operators	a > b
6	==, !=	Equality and inequality	a == b
7	&&	Logical AND	a && b
8	`		`
9	=	Assignment	a = b

Note: Operators on the same precedence level are evaluated based on associativity.

3. Associativity of Operators

Associativity determines the direction of evaluation when operators have the same precedence.

Operator(s)	Associativity
(), ++, --	Right → Left
*, /, %	Left → Right
+, -	Left → Right
<, <=, >, >=	Left → Right
==, !=	Left → Right
&&, `	
= (assignment)	Right → Left
4. Example to Understand Precedence and Associativity
#include <stdio.h>

int main() {
    int a = 5, b = 3, c = 2;
    int result;

    result = a + b * c;   // * has higher precedence than +
    printf("%d\n", result);  // 5 + (3*2) = 11

    result = (a + b) * c; // Parentheses first
    printf("%d\n", result);  // (5+3)*2 = 16

    result = a - b - c;   // Associativity left-to-right
    printf("%d\n", result);  // (5-3)-2 = 0

    return 0;
}


Output:

11
16
0


✅ Explanation:

Multiplication * happens before addition +.

Parentheses () override precedence.

Subtraction - is left-to-right, so (5-3)-2 = 0.
