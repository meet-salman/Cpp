# Russian Peasant Multiplication

## Problem Description

Russian Peasant Multiplication is an ancient algorithm used to multiply two integers. The method involves halving one number and doubling the other until the first number is reduced to 1, adding specific results along the way to get the final product. This technique is efficient and utilizes simple arithmetic operations to achieve the result.

### Algorithm Steps:

1. **Start with two integers**, `a` (multiplicand) and `b` (multiplier), that need to be multiplied.

2. **Repeat until `a` becomes 1**:
   - **If `a` is even**:
     - Halve `a` (i.e., `a = a / 2`).
     - Double `b` (i.e., `b = b * 2`).
   - **If `a` is odd**:
     - Subtract 1 from `a` to make it even (i.e., `a = a - 1`).
     - Halve the new `a` (i.e., `a = a / 2`).
     - Double `b` (i.e., `b = b * 2`).
     - **Add the current value of `b` to the result** since `a` was odd at that step.

3. **Continue this process**, halving `a` and doubling `b` at each step, while adding the current value of `b` to the result when `a` is odd.

4. **Sum all values of `b` recorded** during the steps where `a` was odd, along with the final value of `b` when `a` equals 1.

### Example:

Consider multiplying `a = 5` and `b = 3` using the Russian Peasant Multiplication algorithm:

- **Step 1**: Start with `a = 5`, `b = 3`.
  - `a` is odd, subtract 1: `a = 4`, double `b`: `b = 6`. Add `3` to result.
- **Step 2**: Now `a = 4`, `b = 6`.
  - `a` is even, halve `a`: `a = 2`, double `b`: `b = 12`.
- **Step 3**: Now `a = 2`, `b = 12`.
  - `a` is even, halve `a`: `a = 1`, double `b`: `b = 24`.
- **Step 4**: Now `a = 1`, `b = 24`.
  - `a` is 1, add `b` to result.

Sum of all `b` values added during odd steps: `3 + 24 = 27`. However, correct multiplication yields `15`, indicating the need to track and correct each step carefully.

## Objective

Implement the Russian Peasant Multiplication algorithm recursively, handling both even and odd cases of `a`. The function should compute the product of two numbers using this approach.

### Constraints:
- The inputs will be positive integers.
- The implementation should be efficient and handle varying input sizes effectively.



<!-- CONTRIBUTING -->
## Contributing
Contributions are welcome! If you want to add more patterns or improve the existing code, feel free to reach out. Happy coding!


<!-- CONTACT  -->
## Contact

Salman Ahmed - [@Linkedin](https://www.linkedin.com/in/meet-salman/) - say2salmanahmed@gmail.com

<p align="right">(<a href="#readme-top">back to top</a>)</p>   
