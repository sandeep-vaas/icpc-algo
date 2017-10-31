def gcd(a, b):
    """Calculate the Greatest Common Divisor of a and b.

    Unless b==0, the result will have the same sign as b (so that when
    b is divided by it, the result comes out positive).Division by 0 not possible.
    """
    while b:
        a, b = b, a%b
    return a
