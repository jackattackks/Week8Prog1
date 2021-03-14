 # Week8Prog1
 
 Assignment - Pointers - Three(3) programs.

 

Program 1 - Create a class called TEST.

Write the following 4 functions for it.

Function 1

void testNullPtr().

In it, Declare a pointer int * ptrInt.

Assign NULL to the pointer.

What happen when you dereference a NULL pointer ?

( *ptrInt = 42; )

Function 2

void memoryLeak().

In it, Declare a pointer double * ptrDouble

Assign a new double to ptrDouble.

DeReference it and assign 3.123456789 as the value

Function 3

Declare the function header:  string * deletePointer()

In it, Declare a pointer string * ptrString

Assign a new string to ptrString.

DeReference it and assign "Carlos" as the value.

write a return statement - for the pointer ptrString

Function 4

void testTwoAlias()

In it, Declare a pointer int * ptrAlias1

Assign new int to ptrAlias1

De-reference it and assign a value of 42

Also, Declare a 2nd pointer int * ptrAlias2 in the function.

copy the ADDRESS in ptrAlias1 to ptrAlias2

cout the address values stored in ptrAlias1 and ptrAlias2

cout the dereferenced values of ptrAlias1 and ptrAlias2

Explain the results

In the MAIN() function

Declare an instance of the Test class.  TC1.

Test 1  - call the testNullPtr function, what happens.. explain it clearly.

Test 2  - Write a loop that runs a billion times. In the loop call memoryLeak() function.

Explain your results.

Test 3  - In the main function, declare a string *ptrS

Call the deletePointer function, assign deletePointer return value to ptrS.

Dereference ptrS. What do you get ?

Explain your results.

Test 4  - Call the testTwoAlias function.

Explain the results
