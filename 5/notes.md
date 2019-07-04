# Tutorial 5 notes

## Any questions from lectures?

## Noteworthy points/common problems:

* I forgot to select code reviewers again :( anyone want to come up and do reverse.c later?
* New lab partners (do you want to choose or should I randomise?)
* Weekly test due this afternoon
* Assignment due in a week and a half
* Happy 70th birthday UNSW?

## Tutorial Question 3 - If an array is declared as int numbers[20]; and your program assigns a value to each element in the array, what is the problem with the statement x = numbers[20];? What happens if we access it anyway?

<details>
<summary>Answer</summary>
Because arrays use zero-based indexing, accessing the element indexed 20 is accessing the 21st item in the array. This will access a value that is not within the boundaries of the array.
Behaviour of a program that does this is undefined and it is possible, for example, that it will cause the program to terminate. Sometimes it will retrieve the value of another variable.

dcc will stop this from happening but gcc wont.

![cant stop me](/images/sign.jpg)

</details>

## Tutorial Question 2 - What is a function? Why would we use functions in our code?

<details>
<summary>Answer</summary>
Functions are code that is "called" and "returns". Each function will have an output type (that could be void) as well as some input parameters. The input parameters will be declared just like variables and the function will receive values for these when it is called.
It's important to remember that variables will be passed to a function by value, which means that the function itself will not be able to make changes to the variables that are passed to them and also that the input parameters are created when the function is called and will be destroyed when the function ends.

We use functions to separate code so that we don't have to write it repeatedly and we also don't have long or deep nested code clogging up our main.
</details>

## Tutorial Question 5 - array_length.c

Write a function with the prototype `int array_length(int nums[])` that returns the length of the inputted array.

<details>
<summary>Answer</summary>
You can not write such a function in C.
It is not possible for a C function to determine the length of an array it has been passed.

Programmers usually do one of 3 things.

* Pass the array length as another parameter to the function.
* Use a special value in an array element to mark the finish of the array - e.g. 0 if the array need contain only positive ints
* Pass an array of a specific length to the function - e.g. always pass arrays of 20 elements
For functions you write in this course, you should opt for option (a).
</details>

## Tutorial Question 6 - test_initialised.c

Write a function with the prototype `int test_initialised(int n, int nums[n])` that which returns 1 if all elements of array nums are initialized, otherwise returns 0.

<details>
<summary>Answer</summary>
You can not write such a function in C.
It is not possible at runtime in C to determine if a variable has been initialized

C programmers must take care to ensure that all variables, including array elements, are appropriately initialized.
</details>

## Code review time!

Help them out with any positive or constructive feedback.

## Tutorial Question 7 - print_array.c

Write a function with the prototype `void print_array(int n, int array[n])` which prints n integers from an array on a single line separated by a space.

## Why do we prototype functions in c?

<details>
<summary>Answer</summary>
It's a legacy feature of c from decades ago. It allows the C compiler to go through the code exactly once, saving time as what now takes milliseconds to compile would have used to take hours. It is similar to asking why we need to declare a variable before we use it. Whenever the C compiler goes past a name like string it either decides it is a variable or whether the programmer has made a mistake, but C needs to check that the variable already exists so we define our variables before we use them. Prototyping works in the same way.
</details>

## Tutorial Question 8 - scanf_array.c
Write a function with this prototype `int scanf_array(int n, int array[n])` which reads n integers into an array.
Your function should return the number of integers it actually read.

# Bonus Questions/Revision

## Tutorial Question 9 - occur.c

Write a C program occur.c which reads 6 numbers then reads another number and prints how many times that number occurred in the first 6. For example:

```c
    $ ./occur
    Enter 6 numbers: 1 3 1 3 1 9
    Enter a number: 1
    1 occurred 3 times in the 6 numbers read
```