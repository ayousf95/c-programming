# Basic Structure of a C Program

As we saw with the “Hello World” example, a C program needs a main which acts as the entry point for the program. What that means is that when you execute the program, `main()` is called and whatever is in `main()` is executed. `main()` can contain calls to other functions. This also means that if you have a function which is not called directly or indirectly from `main()`, it will never be used.

So, let us go through a more involved example to understand the structure of a C program.

```
#include <stdio.h>
int square (int x);

int main(void){
   int a = 10;
   int square_of_a = square(a);

   printf(“The square of %d is %d”, a, square_of_a);
   return 0;
}

int square (int x){
   return x * x;
}
```

We start with a program to calculate the square of a number. You should always start reading a program from `main()` function and then follow the functions that are being called. Here we start with the curly brackets/parenthesis. 

The parenthesis in C depicts a block. The starting/left parenthesis starts a new block and the right parenthesis closes the block. The blocks are **well-formed**. It means that two blocks cannot overlap each other. One block can be nested into another block. It is because of this structure, **C is a structured language**.  Each block can hold one or more statements. A statement can be a function call or an assignment. A function call means that you are calling a function which has been defined somewhere else. Assignment means that we are assigning the result of the right hand side **(r-value)** of an assignment operator **=** to the left hand site **(l-value)**. The left hand side must be a variable. The right hand side can be a function call, a variable, a constant literal or an expression. 

1. **Variable** is an object which can hold a type. 
2. **Constant literal** is an object which holds a value e.g. 1(int), 10L (long int), 5.6 (double), 5.6f (float), 0x10 (hexadecimal int), 06 (octal). 
3. **Expression**is combination of operands and operator e.g. 10 + 20

After the parenthesis, there is the declaration of `a`.

**Declaration** is introducing a new variable and setting its type. In the above example we have declared a new variable `a` and set its type to `int`. 

**Type** determines the value an object can hold and the operations that can be performed on it. So if we set the type of `a`  to `int` it means that now a can hold integer values and compiler can perform integer compatible operations on it. 

Along the declaration, this line also defines and initializes it. 

**Definition** is to allocate memory to a variable. Most of the time **declaration** and **definition** of variables are done at the same time  in C. 

**Initialization** is assigning a value to the variable. We can do it inline like we have done in the example above of we can do it later like this.

```
int a;
a = 10;
```

Here we have separated declaration/definition from initialization. 

Moving to the next line. We are now calling a function `square()` with `a` as **argument** and assigning its result to the new variable `square_of_a`. This is known as calling a function. The variable passed to the function is known as an argument. Any r-value can be passed as an argument.

Now let us go to the function definition of `square()`. It is written below the `main()` function. A function consists of four parts.

1. The return type:- It is the value that is returned by the function.
2. The function name :- It is the name used to call this function.
3. The parameters:- These are the variables holding the values passed to the function when a call is made.
4. The function body:- The statements that are to be executed when a function is called.

In the case of `square()`, the return type is specified as `int`. the function name is `square`, the only parameter passed is an `int` variable named `x` and the body is a single statement multiplying the parameter with itself to calculate the square value and then return that value.

Let us now go back to the `main()`. We now output the values as a formatted statement and finally return from main(). No need to worry about the `printf` function, we will explain it later.

You might have noticed that we have declared `square()` twice. Once at the top where we did not specify the body of the function and at the bottom where we specified the body. The first one is only a declaration or we call it function prototype. There is no body. Such a statement helps the compiler to ensure a proper call is made. So we should have a declaration of a function before any call is made to that function otherwise the compiler will throw a warning. At the bottom, `square()` is a definition is it includes a body.

## Assignment
 1. Remove the function prototype of `square()` and try compiling and linking and see what happens.
2. Remove the function definition of `square()` and then try compiling and linking and see what happens.

