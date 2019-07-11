# Tutorial 6 Notes

## Noteworthy points

* Who wants to code review?
* We will cover: chars, strings, program arguments and atoi()
* A sneaky Kahoot
* Who wants to code review?
* Assignment is due soon make sure to ask any questions in the lab.

## Important Digression - What is ASCII?

<details>
<summary>Answer</summary>
Remember back to week 2 we talked about how can we represent integers in binary. This is the solution to another problem, how can we represent characters in binary? We use ASCII (hint type 'ascii' into the terminal to see what the ASCII table looks like). In effect if we know a sequence of bits (just ones and zeros) is in fact ASCII then we can interpret it as ASCII and instead of rendering their numerical values, for example 42 for '*' we can render it onto the screen as their ASCII values.
</details>

## What would the following code snippets print in C

```c
    ch = 'a';
    printf("%d", ch);
```

<details>
<summary>Answer</summary>
The ASCII value for 'a' which we can find by typing in 'ascii'. It is 97.
</details>

```c
    ch = 'a';
    printf("%c", ch);
```

<details>
<summary>Answer</summary>
The character 'a' as we have told printf to print the character.
</details>

```c
    printf("%c", 42);
```

<details>
<summary>Answer</summary>
The character '*' as we have told printf to print the character representation of 42.
</details>


## Code Review!

## Tutorial Question 3 - sum_digits.c

Write a program sum_digits.c which reads characters from its input and counts digits. When the end of input is reached it should print a count of how many digits occurred in its input and their sum.

For example: 
```c
    $ ./sum_digits
    1 2 3 o'clock
    4 o'clock rock
    Input contained 4 digits which summed to 10
    $ ./sum_digits
    12 twelve 24 twenty four
    thirty six 36
    Input contained 6 digits which summed to 18
```

## What is a string? What is the type of a string? How do we declare a string?

<details>
<summary>Answer</summary>
A string is just an array of characters with a nul-terminator at the end. It is how we print sentences or sequences of characters in C. 

``` c
    char *string = "Hello";
    char string[] = "Hello";
```

</details>

## How do we get command line arguments and what is their type?

<details>
<summary>Answer</summary>
By adding ```int argc, char *argv[]``` to our main function we can access strings passed into the program.
</details>

## Tutorial Question 4 - echo_digits.c

Write a program echo_digits.c which print the digit characters (only) in its command line arguments.

## How can we convert a string to an int?

```c
    #include<stdio.h>

    int main(int argc, char *argv[]) {

        char *num1;
        char *num2;
        printf("Enter two numbers: ");
        scanf("%s %s", &num1, &num2);

        printf("They sum to %d\n", num1 + num2);
        return 0;
    }
```

## Kahoot time!

https://create.kahoot.it/share/comp1511-week-6/75eafaf3-f57b-45df-9c9c-7e9d7b1e9b73

## Tutorial Question 2

* Encode and decode a message with a Caesar cipher.
* The shift is the key for a Caesar Cipher - how many bits are in it?
* How would you crack a Caesar Cipher?
* Encode and decode a message with a Substitution cipher.
* The letter mapping is the key for a Substitution cipher - how many bits are in it?
* How would you crack a Substitution Cipher (assume the plain text is English)?