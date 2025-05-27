/*
Lvalues and Rvalues in C++
In C++ (and C), expressions can be broadly classified into lvalues and rvalues.

Lvalue (Locator Value):
An lvalue refers to an object that occupies identifiable location in memory (i.e., it has an address).

You can assign to it, and you can take its address using the & operator.

Typical examples: variables (int a;), dereferenced pointers (*ptr), array elements (arr[i]).

An lvalue is required on the left-hand side of an assignment.

int a = 5;      // 'a' is an lvalue
a = 10;         // OK
int* p = &a;    // OK, we can take the address of 'a'
Invalid lvalue examples:

20 = a;       // ❌ Error: 20 is not an lvalue (it's a literal constant)
b - a = 30;   // ❌ Error: b - a is an rvalue (a temporary result of expression)
Rvalue (Read Value):
An rvalue is a temporary value that does not persist beyond the expression in which it appears.

You cannot assign to an rvalue, and you cannot take its address.

Examples: constants (10), expressions (a + b), function calls returning by value.

int a = 5, b = 10;
int c = a + b;  // 'a + b' is an rvalue; valid as it's on the right side
int* p = &(a + b); // ❌ Error: cannot take address of an rvalue
Function call returning a non-reference:

int f() { return 42; }
int* p = &f();  // ❌ Error: 'f()' returns an rvalue
Quick Test: Is it an Lvalue?
Ask: Can I take its address using &?

If yes → it’s an lvalue.

If no → it’s an rvalue.

Example:

int f() {int c = 10; return c;}
int a, b;
int* p1 = &a; // Yes you can, so a is an lvalue.
int* p2 = &(a+b); // No you can't, so a+b is an rvalue.
int* p3 = &10; // No you can't, so 10 is an rvalue.
int* p4 = &f(); // No you can't, f() returns an rvalue.
*/
