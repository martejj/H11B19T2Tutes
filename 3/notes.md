# Tutorial 3 Notes

## More notes at https://cgi.cse.unsw.edu.au/~cs1511/19T2/tut/03/questions

## Intro questions: Are these good and valid C variable names?

<details>
<summary>THX1138</summary>

### Not descriptive and either snake_case or camelCase but valid
</details>

<details>
<summary>2for1</summary>

### Possibly good but not valid as it starts with a number.
</details>

<details>
<summary>keanuReeves</summary>

### Good if the variable stores something to do with Keanu Reeves (also example of camelCase) and valid.
</details>

<details>
<summary>mr_bean</summary>

### Good if the variable stores something to do with Mr Bean (also example of snake_case) and valid.
</details>

<details>
<summary>i</summary>

### Good for a simple incrementer in a while loop but try and use a contextual variable e.g. if you have an array of all primes call the counter primeIndex or currentPrime.
</details>

<details>
<summary>NUM_PEARS</summary>

### Does not follow snake_case or camelCase this is in fact SHOUTY SNAKE_CASE - generally used for #defines.
</details>

<details>
<summary>my space</summary>

### Good if variable has something to do with My Space but not valid as it contains a space.
</details>

<details>
<summary>event_counter</summary>

### Good if we are counting a number of events (maybe specify the events e.g. a_counter to count number of a's inputted) and valid.
</details>

<details>
<summary>^oo^</summary>

### Not descriptive and not valid as ^ cannot occur anywhere in a variable name.
</details>

<details>
<summary>_MEMLIMIT</summary>

### Does not adhere to a naming convention for variables (snake_case or camelCase) partially valid, the complier will allow it but it may override a system variable called _MEMLIMIT.
</details>

<details>
<summary>return</summary>

### Not valid as return is a keyword along with many others we have seen e.g. void, if, and more.
</details>

<details>
<summary>*numApples</summary>

### Trick question: Syntactically correct but sematically incorrect (c will accept it but it does not do what we expect, it creates a pointer).
</details>

## Any questions from the lectures/past tute?

## Common problems from last weeks tute

* Double math (we will cover in this tute)
* Giving multiple times uses the most recent submission
* Use ```1511 style```
* Follow the restrictions (e.g. only using if statements) 
* Weekly tests!

## Code review

* Every week, in pairs, present code to the class for review
* This week I will show some of mine from when I did COMP1511 and you will all review it


## C is a typed language. What does this mean?

<details>
<summary>Answer</summary>

It means each variable has an associated type and thus size. Different operations work on different types.

For example int, double (dont use ~~float~~), boolean??, ~~string~~, ~~char~~, ~~pointer~~, ~~array~~, ~~struct~~. We will cover most of these types in the future, one quick and important question though is:

What values are true and false? How could we test this?

</details>

## Tutorial question 4 cm2feet.c

Read a height in centimetres and prints it in feet.

Reminder: there 2.54 centimetres in an inch and 12 inches in a foot.

For example:

```c
    $ ./cm2feet
    Enter your height in centimetres: 183
    Your height in feet is 6
```

## The humble while loop

```c
    initialise;
    while (condition) {
        code;
        increment;
    }
```

For example:

```c
    i = 1;
    while (i < 2) {
        printf("Ah shit, here we go again.");
    }
```
<details>
<summary> Answer </summary>

![Ah shit here we go again](/2/images/awshit.jpg)
</details>

## Tutorial question 5 count42.c

Print the integers 1..42, one per line. 

For example:

```c
    $ ./count42
    1
    2
    ...
    42
```

## Tutorial question 6 count_up.c 

Reads an integer **n** and then print the integers 1..**n**, one per line. 

For example:

```c
    $ ./count_up
    Enter finish: 3
    1
    2
    3
    $ ./count_up
    Enter finish: 7
    1
    2
    3
    4
    5
    6
    7
```

## Tutorial question 7 range.c 

Write a C program range.c which reads integers **n** and **m** and then print the integers **n**..**m**, one per line.

For example:

```c
    $ ./range
    Enter start: 3
    Enter finish: 7
    3
    4
    5
    6
    7
```


## Tutorial question 8 range_7.c

Read 2 integers **n** and **m**, and then print the integers between **n** and **m** (including **n** and **m**) which are divisible by 7.

Hint: if x is divisible by 7, then x % 7 == 0

For example:

```c
    $ ./range7
    Enter start: 3
    Enter finish: 49
    7
    14
    21
    28
    35
    42
    49
```

# Bonus/revision questions

## Tutorial question 8 range_divisible.c

Read 3 integers **n**, **m** and **x** then print the integers between **n** and **m** (including **n** and **m**) which are divisible by **x**.

```c
    $ ./range_divisible
    Enter start: 20
    Enter finish: 100
    Enter divisor: 13
    26
    39
    52
    65
    78
    91
    $ ./range_divisible
    Enter start: 80
    Enter finish: 120
    Enter divisor: 5
    80
    85
    90
    95
    100
    105
    110
    115
    120
```
