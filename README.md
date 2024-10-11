# function-operator-overloding
## AIM:-  <br>
Implement function overloading. <br>
Implement operator overloading. <br>

## software used:- Visual Studio Code <br>

## Theory:- <br>
### Function Overloading in C++

**Function overloading** is a feature in C++ that allows multiple functions to have the same name but differ in their parameter types or number of parameters.<br> When a function is called, the compiler determines which version of the overloaded function to use based on the arguments provided in the function call.<br> This enhances code readability and reusability by allowing similar operations with different data types or different numbers of arguments.

Key points:
- Functions must differ in the type, number, or sequence of parameters.
- Return type alone cannot be used to distinguish overloaded functions.
- It helps create more intuitive and concise code.

### Operator Overloading in C++

**Operator overloading** allows you to redefine the behavior of operators (such as `+`, `-`, `*`, etc.) for user-defined types like classes.<br> In C++, you can specify how operators behave when applied to objects of these types, making them work similarly to built-in types. <br>This can be used to define custom behavior for arithmetic, comparison, assignment, or other operators when dealing with complex objects.

Key points:
- You can overload most operators except for a few like `.` (dot operator) and `::` (scope resolution).
- Operator overloading does not change the precedence or associativity of operators.
- It helps make user-defined types more intuitive to work with and enhances the functionality of objects. 

### Usage Considerations:
- Both function and operator overloading should be used to increase clarity and make code intuitive, not to obscure its meaning.
- Overloading functions and operators should align with expected behavior for ease of use and maintenance.

### Algorithm of function overloding :

1. **Start**.

2. **Define the `addition` class**:
   - Define three overloaded `sum` functions:
     - `int sum(int a, int b)`: Takes two integers and returns their sum.
     - `int sum(int a, int b, int c)`: Takes three integers and returns their sum.
     - `double sum(double d, double f)`: Takes two doubles and returns their sum.

3. **In the `main()` function**:
   1. Create an object `obj` of the `addition` class.
   
   2. **Call the first overloaded `sum` function**:
      - Input: Two integers (10, 20).
      - Process: Call `sum(int a, int b)` with the provided arguments.
      - Output: Calculate `10 + 20 = 30` and print the result.

   3. **Call the second overloaded `sum` function**:
      - Input: Three integers (10, 20, 20).
      - Process: Call `sum(int a, int b, int c)` with the provided arguments.
      - Output: Calculate `10 + 20 + 20 = 50` and print the result.

   4. **Call the third overloaded `sum` function**:
      - Input: Two doubles (10.8, 20.34).
      - Process: Call `sum(double d, double f)` with the provided arguments.
      - Output: Calculate `10.8 + 20.34 = 31.14` and print the result.

4. **End**.

### Algorithm of operator overloding:

1. **Start**.

2. **Define the `Complex` class**:
   - Two private data members, `real` and `imag`, represent the real and imaginary parts of a complex number.
   - A constructor initializes the `real` and `imag` parts, with default values of 0.

3. **Operator Overloading**:
   - **Overload the `+` operator**:
     - Input: Another `Complex` object.
     - Process: Add the real and imaginary parts of the calling object (`this`) and the passed object (`obj`).
     - Output: Return a new `Complex` object with the resulting real and imaginary parts.
   
   - **Overload the `-` operator**:
     - Input: Another `Complex` object.
     - Process: Subtract the real and imaginary parts of the passed object (`obj`) from the calling object (`this`).
     - Output: Return a new `Complex` object with the resulting real and imaginary parts.

4. **Define the `print` function**:
   - Output: Print the complex number in the format `real + i imag`.

5. **In the `main()` function**:
   - Create two `Complex` objects `c1` and `c2` with initial values `(10, 5)` and `(2, 4)` respectively.

   - **Call the overloaded `+` operator**:
     - Input: Objects `c1` and `c2`.
     - Process: Add the real and imaginary parts of `c1` and `c2` using the overloaded `+` operator.
     - Output: Store the result in a new object `c3` and print it.

   - **Call the overloaded `-` operator**:
     - Input: Objects `c1` and `c2`.
     - Process: Subtract the real and imaginary parts of `c2` from `c1` using the overloaded `-` operator.
     - Output: Store the result in a new object `c4` and print it.

6. **End**.

## conclusion :-
In this program we perform the functions and operators over loading.
