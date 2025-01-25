# N-Queens Problem

## Description

The **N-Queens Problem** is a classic backtracking problem in which we must place **N queens** on an **N × N** chessboard such that:

1. No two queens are in the **same row**.
2. No two queens are in the **same column**.
3. No two queens are on the **same diagonal**.

The N-Queens problem can have multiple valid solutions, and the goal is to find **all possible valid arrangements** of the queens that satisfy these conditions.

## Example

### For **N = 4**:

One possible solution:

```
. Q . . 
. . . Q
Q . . .
. . Q .

```

Another valid solution:

```
. . Q .
Q . . . 
. . . Q 
. Q . .

```

Each 'Q' represents a queen, and each '.' represents an empty space on the chessboard. The solution satisfies all constraints as no two queens attack each other.
