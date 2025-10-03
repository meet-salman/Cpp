# Divisor Finder in C++

This program finds and prints all the **divisors** of a given integer `n`.  
It uses a `set<int>` to automatically handle uniqueness and keep the divisors sorted.

---

## Algorithm

To find divisors of a number `n`:

1. Initialize an empty set `divisors`.
2. Iterate `i` from `1` to `sqrt(n)`:
   - If `n % i == 0`, then:
     - `i` is a divisor.
     - `n / i` is also a divisor.
   - Insert both into the set.
3. After the loop ends, print all divisors from the set.

Using `sqrt(n)` instead of `n` reduces the complexity, since divisors always come in pairs.

---

## Dry Run Example

### Input:

```
n = 36
```


### Steps:
- Loop runs `i = 1` to `sqrt(36) = 6`.
- `i = 1` → 36 % 1 = 0 → add `1`, `36`
- `i = 2` → 36 % 2 = 0 → add `2`, `18`
- `i = 3` → 36 % 3 = 0 → add `3`, `12`
- `i = 4` → 36 % 4 = 0 → add `4`, `9`
- `i = 5` → 36 % 5 ≠ 0 → skip
- `i = 6` → 36 % 6 = 0 → add `6`, `6`

Set automatically keeps unique values.  

**Output:**
```
1, 2, 3, 4, 6, 9, 12, 18, 36
```


---

## 💻 Example Run

**Input:**
```
46
```

**Output:**
```
1, 2, 23, 46
```