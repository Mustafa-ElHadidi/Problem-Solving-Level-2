# C++ Problem Solving – Level 2

Solutions to Level 2 problem-solving challenges in C++, covering arrays, strings, and number algorithms, with a focus on clean, readable code.

Each solution is a single `.cpp` file. The goal is not only to get the right answer, but to write code that is easy to read, reuse, and maintain.

## What I practiced

| Area | Examples |
|---|---|
| **Arrays** | Filling arrays, printing them, copying, reversing, shuffling, checking if an array is a palindrome |
| **Number algorithms** | Prime numbers, perfect numbers, checking number properties |
| **Strings and characters** | Printing all letters from A to Z, working with character codes |
| **Random numbers** | Generating random values, shuffling array elements |
| **Functions** | Passing arrays to functions, returning results, reusable helpers for input and output |
| **Input validation** | Reading positive numbers, repeating until the input is valid |

## Project structure

```
Problem-Solving-Level-2/
├── README.md
├── .gitignore
└── Problems/
    ├── Problem_01.cpp
    ├── Problem_02.cpp
    ├── ...
    └── Problem_XX.cpp
```

## Clean code principles applied

- Meaningful names for functions and variables
- Small functions that do one thing (`ReadPositiveNumber`, `CheckPrime`, `PrintPrimeNumbersFrom1ToN`)
- No logic inside `main`; it only calls functions
- An `enum` instead of magic numbers for results
- Reusable helper functions for input and output
- A short comment stating the idea of each problem

## Featured example: Prime Numbers from 1 to N

**Problem:** Read a positive number N, then print every prime number from 1 to N.

Each step has its own function: reading the input, checking one number, and printing the range. `main` is a single line.

```cpp
#include <iostream>
#include <string>
using namespace std;

enum enPrime { Prime = 1, NotPrime = 2 };

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

enPrime CheckPrime(int Number)
{
    if (Number < 2)
        return enPrime::NotPrime;

    int M = Number / 2;
    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return enPrime::NotPrime;
    }

    return enPrime::Prime;
}

void PrintPrimeNumbersFrom1ToN(int Number)
{
    cout << "\nPrime Numbers from 1 To " << Number << " are : " << endl;

    for (int i = 1; i <= Number; i++)
    {
        if (CheckPrime(i) == enPrime::Prime)
            cout << i << endl;
    }
}

int main()
{
    PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Please enter a number"));
}
```

**Sample run:**

```
Please enter a number
20

Prime Numbers from 1 To 20 are : 
2
3
5
7
11
13
17
19
```

**Why this design:**

1. `CheckPrime` returns as soon as it finds a divisor, so it never does extra work.
2. A divisor larger than `Number / 2` is impossible, so the loop stops at half the number.
3. Numbers below 2 are handled first, so 1 is correctly excluded.
4. The `enum` makes the result readable: `enPrime::Prime` says more than `true`.
5. Input, logic, and output are separated, so each function can be reused in other problems.

## Other problems worth a look

- **Shuffle an array:** fills an array, then swaps elements at random positions.
- **Palindrome array:** checks whether an array reads the same from both ends.
- **Prime numbers with arrays:** builds on the prime check and works with array results.
- **Print A to Z:** loops over the alphabet using character codes.

## How to run

You need a C++ compiler such as `g++` or Visual Studio.

```bash
g++ Problems/Problem_01.cpp -o problem_01
./problem_01        # on Windows: problem_01.exe
```