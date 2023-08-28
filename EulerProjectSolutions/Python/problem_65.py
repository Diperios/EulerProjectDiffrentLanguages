from fractions import Fraction

e_expansion = [2]
for k in range(1, 34):
    e_expansion.extend([1, 2 * k, 1])

result = Fraction(1, e_expansion[-1])
for term in reversed(e_expansion[:-1]):
    result = 1 / (term + result)

numerator_sum = sum(map(int, str(result.numerator)))
print(f"Sum of digits in the numerator of the 100th convergent of the continued fraction for e: {numerator_sum}")
