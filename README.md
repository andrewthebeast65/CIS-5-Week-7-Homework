# Homework 7 · Odd and Even

**Week 07 · Arrays**  
**Theme:** One name, many values  
**Due:** Monday night. This assignment is not due Sunday.


## Demo video (required)

Paste a link to a short video of you running this assignment (tool + code + run).
Work without a working video link is incomplete.

The video should show the random array and the two separated groups.

**Your demo:** _add your link here_

https://www.loom.com/share/791ca957fcbf49e48f69c89000425930



## What to build

The starter fills one homogeneous array of 20 `int` elements with `rand`. You will add one `for` loop that separates those elements into even and odd.

Use `main.cpp`. Put your name in the file-top comment. Do not remove the fill.

```cpp
const int N = 20;
int values[N];

srand(static_cast<unsigned>(time(nullptr)));
for (int i = 0; i < N; ++i) {
  values[i] = rand() % 100;
}
```

`rand() % 100` stores an integer from 0 through 99. The values change each run.

- Add one `for` loop. The index runs from 0 through 19.
- Hint: an even integer is divisible by 2, and zero is even. You write the test.
- Store even elements in `evens` and odd elements in `odds`. Each of those arrays has length 20, because every element could fall in one group.
- Keep a count of how many elements each array actually holds. Do not print past the count.
- Print the original array with its index and its element. Then print `Even:` and `Odd:`, in the order the elements appeared.

The list below is fixed so you can check the rule. Your program uses 20 random values, so this exact print will not appear.

```
[0] 17
[1] 42
[2] 8
[3] 0
Even: 42 8 0
Odd: 17
```

## Starter

Use `main.cpp`. Put your name in the file-top comment. The fill is already in `main`. Do not remove it.

## Deliverables

1. Course-visible GitHub repo
2. README with how to compile and run
3. Short demo video that shows the random array and the two groups
4. Canvas links

## Scope fence

No `goto`. No `vector`. No function other than `main`. Keep the given `rand` fill.

## Integrity

- AI = tutor, not ghostwriter
- A program you cannot explain is a zero
- Due: Monday night (not Sunday)
- Discussions (every week): first post Friday, replies Sunday
- Late: course policy (−10%/day unless stated otherwise)

## Rubric

Graded on: it runs, it meets the prompt, output is labeled, and the GitHub repo plus demo video are there.

## Getting started

1. Fork this repo on GitHub.
2. Clone your fork.
3. Compile and run:

```bash
g++ -std=c++17 -o program main.cpp && ./program
```

On Windows (Visual Studio), open `main.cpp` and use **Local Windows Debugger**.
4. Record a short demo that shows your tool, your code, and a real run. Show the random array and the even and odd groups.
5. Paste the video link in the **Demo video** section above.
6. Submit your fork URL on Canvas.
