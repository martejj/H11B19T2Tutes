# Week 7 Tutorial Notes

## Any questions from the lectures/assignment 1?

* Ass1 is done and dusted for most of you - any questions about how it'll be marked?
* This week we'll cover pointers, structs and indirectly more strings and arrays.
* Does anyone want to volunteer for code review for `frequency_analysis.c`

## Tutorial Question 4 - What is a pointer? How do pointers relate to other variables?

<details>
<summary>Answer</summary>

Pointers are variables that store a memory address and a variable type.
They are usually "aimed" at a variable of the particular type.

They're able to read the value of that variable and also are handy because they can be passed into functions, giving the function access to a variable

![Pointers](images/pointers.png)

</details>

## Create a function solve_quadratic, that finds the two solutions to a quadratic.

## Code Review time!

## Tutorial Question 5 - What is a struct? What are the differences between structs and arrays?

<details>
<summary>Answer</summary>
Arrays and struct are both compound data types, formed from other data types.
Array are homogeneous - formed from a single data type.

Structs can be heterogeneous - formed from a multiple data types.

Array element are accessed with integer array indexes.

Structs fields are accessed by name
</details>


## Tutorial Question 6 - pet.c - Define a struct that might store information about a pet

The information should include the pet's name, type of animal, age and weight.

Create a variable of this type and assign information to it to represent an axolotl named "Fluffy" of age 7 that weighs 300grams.

## What is the difference between the dot and arrow (stab) operators in c?

<details>
<summary>Answer</summary>
The dot operator can be used on a struct while the arrow operation can only be used on a pointer to a struct. 
</details>


## Tutorial Question 7 - age_fluffy() 

Write a function that increases the age of fluffy by one and then increases its weight by the fraction of its age that has increased. The function is defined like this:

```c
void age_fluffy(struct pet *my_pet);
```

eg: If fluffy goes from age 7 to age 8, it should end up weighing 8/7 times the amount it weighed before. You can store the weight as an int and ignore any fractions.

Show how this function can be called by passing the address of a struct variable to the function.

## Tutorial Question 8 - Pod Example code

Look at the example code in count_orca_sightings.c and figure out how you would complete the code it asks for.