# Find the Heavier Ball (Limited Weighings)

## Problem Overview
You have `n` balls, all of the same weight except **one heavier ball**.  
You are allowed to use a **weighing scale at most `k` times**.  
The goal is to find the index of the heavier ball within the given limit.

This problem is solved using a **divide and conquer** strategy with **three groups**, reducing the search space with each weighing.

---


## How It Works

### Step 1: Divide into 3 Groups
**Example** with 9 balls:

```
balls: [0, 1, 2, 3, 4, 5, 6, 7, 8]
weights: [2, 2, 2, 2, 5, 2, 2, 2, 2]
```

Split the balls into **3 groups**: `G1`, `G2`, `G3`.

```
G1: [0, 1, 2]
G2: [3, 4, 5]
G3: [6, 7, 8]
```
---

### Step 2: Compare Two Groups
- Sum the weights of `G1` and `G2`.
- Compare `sum(G1)` vs `sum(G2)`:
  - If `sum(G1) > sum(G2)` → heavier ball is in `G1`.
  - If `sum(G2) > sum(G1)` → heavier ball is in `G2`.
  - If equal → heavier ball is in `G3`.

This **consumes one weighing**.

---

### Step 3: Repeat (Limited by `k`)
- Take the suspicious group.
- Divide it again into 3 smaller groups.
- Compare two groups → *consumes another weighing.*
- Stop when:
  1. **Only one ball remains** → that’s the heavier ball.
  2. **Weighings used = k** → stop and return `-1` (not enough weighings).

---

## Example

Heavier ball at index **4**, allowed `k = 3`.

**Iteration 1 (1st weighing):** Compare `G1` vs `G2`  
`sum(G1)` = 6, `sum(G2)` = 8 → **suspicious group** = `G2 ([3,4,5])`

**Iteration 2 (2nd weighing):** Split `G2`  
`G1` = [3], `G2` = [4], `G3` = [5]

Compare `G1` vs `G2`  
`sum(G1)` = 2, `sum(G2)` = 4 → **suspicious group** = `G2 ([4])`  

**Result:**  
found in **2 weighings (≤ k)**  
```cpp
Index 4
```
---

## Code Highlights

- **`create_groups`**: Splits balls into 3 groups.
- **`sum_of_group`**: Computes sum of weights for a group.
- **`find_suspicious_group`**: Determines which group contains the heavier ball.
- **`grouping_process`**: Runs one round of grouping and comparison.
- **`find_havier_ball`**: Main function to find the heavier ball index.
  - **`k` parameter** limits the number of weighings allowed.
  - **`find_havier_ball`** stops if:
    - The heavier ball is found (`balls.size() == 1`).
    - Or weighings used = `k` (returns `-1`).

---
## Example Run
```cpp
vector<int> weights = {2, 2, 2, 2, 2, 2, 2, 2, 2,
                       2, 2, 2, 2, 2, 2, 2, 2, 2,
                       2, 2, 2, 2, 2, 2, 2, 6, 2};
int k = 3;
```

Output:

```cpp
Heavier ball at index: 25
```

If `k` was too small *(e.g., `k` = 1)*, the **result** would be:

```cpp
Heavier ball at index: -1
```