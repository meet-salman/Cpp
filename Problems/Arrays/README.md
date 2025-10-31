# Prefix Sum 

This C++ program demonstrates how to efficiently calculate prefix sums (cumulative sums) and use them to quickly find the sum of elements in a given range of an array.

## Features
- Computes prefix sums for an array of integers.
- Handles multiple range sum queries efficiently in **O(1)** time per query.
- Includes boundary checks for invalid query ranges.

## Code Explanation

### `calculate_prefix_sum()`
Reads input values into the array and builds the prefix sum array where:
\( pfx[i] = pfx[i-1] + vec[i] \)

### `get_ranged_sum()`
Returns the sum of elements between indices `l` and `r` using:
\( sum = pfx[r+1] - pfx[l] \)

### `main()`
1. Takes input `n` (size of array).
2. Fills array and prefix sum array.
3. Takes multiple range queries (`q`), each with `l` and `r`.
4. Outputs the sum for each range.

## Example

### Input:
```
5
2 4 6 8 10
3
0 2
1 3
2 4
```

### Output:
```
12 18 24
```

## Complexity
- **Prefix Sum Calculation:** O(n)
- **Query Sum Retrieval:** O(1)



## Concepts Covered
- Arrays and Vectors
- Prefix Sum Technique
- Range Query Optimization
