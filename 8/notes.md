# Tutorial 8 notes

## Any questions from this week's lectures?

* This week we will cover **more** structs, **more** pointers, **malloc**, and **linked lists**.
* Assignment 1 automarking is out - we still havent marked your style yet though.
* Assignment 2 spec is out - make sure to read it at least 2x before starting and 3x before asking for help.
* New lab partners!
* Code review for `species_count.c` any volunteers?

## fgets fputs strcmp strcpy strlen getchar putchar

## What is malloc? 

<details>

<summary>Answer</Summary>

Stack demo.

Stack visualisation: https://www.cs.usfca.edu/~galles/visualization/StackArray.html

http://pythontutor.com/c.html#code=void%20f1%28%29%3B%0Avoid%20f2%28%29%3B%0Avoid%20f3%28%29%3B%0Avoid%20f4%28%29%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20f1%28%29%3B%0A%20%20return%200%3B%0A%7D%0A%0Avoid%20f1%28%29%20%7B%0A%20%20int%20a%20%3D%201%3B%0A%20%20int%20b%20%3D%202%3B%0A%20%20f2%28%29%3B%0A%20%20int%20c%20%3D%203%3B%0A%7D%0A%0Avoid%20f2%28%29%20%7B%0A%20%20int%20a%20%3D%201%3B%0A%20%20f3%28%29%3B%0A%20%20int%20b%20%3D%202%3B%0A%20%20f4%28%29%3B%0A%20%20int%20c%20%3D%203%3B%0A%7D%0A%0Avoid%20f3%28%29%20%7B%0A%20%20int%20d%20%3D%201%3B%0A%7D%0A%0Avoid%20f4%28%29%20%7B%0A%20%20int%20e%20%3D%201%3B%0A%7D&curInstr=16&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D

Bad
http://pythontutor.com/c.html#code=struct%20node%20%7B%0A%20%20int%20value%3B%0A%20%20struct%20node%20*next%3B%0A%7D%3B%0A%0Astruct%20node%20*new_node%28int%20value%29%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20%0A%20%20struct%20node%20*new%20%3D%20new_node%2842%29%3B%0A%20%20%0A%20%20return%200%3B%0A%20%20%0A%7D%0A%0Astruct%20node%20*new_node%28int%20value%29%20%7B%0A%20%20%0A%20%20struct%20node%20new%3B%0A%20%20new.value%20%3D%20value%3B%0A%0A%20%20return%20%26new%3B%0A%0A%7D&curInstr=6&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D

Good
http://pythontutor.com/c.html#code=struct%20node%20%7B%0A%20%20int%20value%3B%0A%20%20struct%20node%20*next%3B%0A%7D%3B%0A%0Astruct%20node%20*new_node%28int%20value%29%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20%0A%20%20struct%20node%20*new%20%3D%20new_node%2842%29%3B%0A%20%20%20%20%0A%20%20return%200%3B%0A%20%20%0A%7D%0A%0Astruct%20node%20*new_node%28int%20value%29%20%7B%0A%20%20%0A%20%20struct%20node%20*new%20%3D%20malloc%28sizeof%28struct%20node%29%29%3B%0A%20%20new-%3Evalue%20%3D%20value%3B%0A%20%20%0A%20%20return%20new%3B%0A%0A%7D&curInstr=7&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D


</details>

## How can we improve our `pet.c` code from last week?

## Can we improve this code more? What is a typedef?

## Code review!

## What is a linked list? How does it compare to an array and a string?

<details>

<summary>Answer</Summary>

|                    | Array                  | String            | Linked List      |
|--------------------|------------------------|-------------------|------------------|
|Length              |Constant                |Constant           |Variable          |
|Determine Length by |Extra variable e.g. `n` |Ends with `'\0'`   |Ends with `NULL`  |
|Stored              |Contiguously            |Contiguously       |Randomly in memory|
|Loop through using  |Indexes                 |Indexes or pointers|Pointers          |

List visualisation: https://visualgo.net/en/list

![Memory in c](/images/memory.jpg)

</details>

## What is the head and the tail of a linked list?

<details>

<summary>Answer</summary>

The head is the first element in the linked list, the tail is the last element in the linked list. In general we also refer to the node we are currently pointing to in a linked list the 'curr' node as it is a good habit to always keep the head node pointing to the head of the linked list.

</details>

## What is a Realm and a Location? How are they used and how do they relate to each other? Hint: run `1511 setup-castle-defense`


### Kahoot: https://create.kahoot.it/share/comp1511-wed18-kora-wk07/8a5a6bcf-84e1-4cde-9bd1-e9f263fb8e5e