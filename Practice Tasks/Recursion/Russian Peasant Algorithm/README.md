# Russian Peasant Multiplication

## Problem Description

Russian Peasant Multiplication is an ancient algorithm used to multiply two integers by repeatedly halving one number and doubling the other, and summing specific values to get the final product. This method is also known as the Egyptian multiplication method and uses simple arithmetic operations to perform multiplication efficiently.

### Algorithm Steps:

1. **Start with two integers**, `a` (multiplicand) and `b` (multiplier), to be multiplied.

2. **Repeat until `a` becomes 1**:
   - **If `a` is even**:
     - Halve `a` (i.e., `a = a / 2`).
     - Double `b` (i.e., `b = b * 2`).
   - **If `a` is odd**:
     - Subtract 1 from `a` to make it even (i.e., `a = a - 1`).
     - Halve the new `a` (i.e., `a = a / 2`).
     - Double `b` (i.e., `b = b * 2`).
     - **Add the current value of `b` to the result** since `a` was odd at that step.

3. **Continue this process**, adding the value of `b` to the result whenever `a` is odd.

4. **The final result** is the sum of all `b` values added during the steps when `a` was odd.

### Example:

Consider multiplying `a = 5` and `b = 3` using the Russian Peasant Multiplication algorithm:

- **Step 1**: Start with `a = 5`, `b = 3`.
  - `a` is odd, so add `3` to the result.
  - Subtract 1 from `a`: `a = 4`, then halve it: `a = 2`.
  - Double `b`: `b = 6`.
- **Step 2**: Now `a = 2`, `b = 6`.
  - `a` is even, so halve `a`: `a = 1`.
  - Double `b`: `b = 12`.
- **Step 3**: Now `a = 1`, `b = 12`.
  - `a` is 1, so add `12` to the result.

Summing the values added during odd steps: `3 + 12 = 15`.

### Final Calculation:
- **Result**: 15

## Objective

The goal is to implement the Russian Peasant Multiplication algorithm recursively in C++. The function should manage both even and odd cases of `a`, accumulating the sum of `b` values for odd cases to compute the product.

### Constraints:
- Both inputs will be positive integers.
- The function should handle both small and large values effectively and efficiently.



<!-- CONTRIBUTING -->
## Contributing
Contributions are welcome! If you want to add more patterns or improve the existing code, feel free to reach out. Happy coding!


<!-- CONTACT  -->
## Contact

Salman Ahmed - [@Linkedin](https://www.linkedin.com/in/meet-salman/) - say2salmanahmed@gmail.com

<p align="right">(<a href="#readme-top">back to top</a>)</p>   
