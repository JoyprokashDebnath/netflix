Here are the C programs for *all 6 questions* from the assignment:

---

*1. Swap two numbers & explain call by value vs call by reference*

```c
#include <stdio.h>

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}
```

*Explanation:*
- *Call by value:* A copy is passed, so changes don't reflect in the original.
- *Call by reference:* Address is passed, so changes reflect directly in the original variables.

---

*2. Factorial using recursion*

```c
int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}
```

(Full code shared earlier)

---

*3. GCD of two numbers using recursion*

```c
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a = 48, b = 18;
    printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));
    return 0;
}
```

---

*4. Compute xⁿ using recursion*

```c
#include <stdio.h>

int power(int x, int n) {
    if (n == 0)
        return 1;
    return x * power(x, n - 1);
}

int main() {
    int x = 2, n = 5;
printf("%d^%d = %d\n", x, n, power(x, n));
    return 0;
}
```

---

*5. Calculate nPr and nCr using functions*

```c
#include <stdio.h>

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int nPr(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n = 5, r = 2;
    printf("nPr = %d\n", nPr(n, r));
    printf("nCr = %d\n", nCr(n, r));
    return 0;
}
```

---

*6. Convert binary to decimal and vice versa using functions*

```c
#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binary) {
    int decimal = 0, i = 0;
    while (binary != 0) {
        int digit = binary % 10;
        decimal += digit * pow(2, i++);
        binary /= 10;
    }
    return decimal;
}

int decimalToBinary(int decimal) {
    int binary = 0, i = 1;
    while (decimal != 0) {
        binary += (decimal % 2) * i;
        decimal /= 2;
        i *= 10;
    }
    return binary;
}

int main() {
    int binary = 1011, decimal = 13;
    printf("Binary %d to Decimal = %d\n", binary, binaryToDecimal(binary));
    printf("Decimal %d to Binary = %d\n", decimal, decimalToBinary(decimal));
    return 0;
}
```