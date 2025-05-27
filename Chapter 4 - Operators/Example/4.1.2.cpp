/*
C++ provides the + and – unary operators which require one operand. The unary + operator has no effect. The result with
the unary – is the negative of its operand. When both unary and binary + and – operators are mixed, the
compiler fgures out how to apply them. For example:

int a = +30; // + has no effect.
a = -40; // – is interpreted as the unary operator.
int b = -(a-10); /* The inner – is interpreted as the binary operator and the
outer – as the unary. */
/*-a;  This statement does nothing. Be careful, the value of a remains the
same.

a = -a; // Now, the value of a changes.*/
