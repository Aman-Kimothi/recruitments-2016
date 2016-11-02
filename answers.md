1.

**answer:** 2.  ```thm```

**explaination:**
pre/post operations (op) works in the following way:

 * pre: op the variable, then use it
 * post: use the variable, then op it



--------------------------------------------------------------------------------

2.

**answer:** 4. ```10```

**explaination:**
this answer would seem queer, but is due to "padding" of variables in a
struct. google
"[padding in c](https://www.google.com/search?q=padding+in+c)". oh, and watch
out for the ```printf``` being ```%x```.

--------------------------------------------------------------------------------

3.

**answer:** 3. ```31```

**explaination:**

 * ```(k % 1)``` is going to return ```0```, however, it is evaluated. the
```?:``` is just to throw off people.
 * the ```printf```/```foo()``` parameters are evaluated from right to left
(generally).

--------------------------------------------------------------------------------

4.

**answer:** 3. ```32```

**explaination:**
bitwise operators.

--------------------------------------------------------------------------------

5.

**answer:** 2. ```1 2 5```

**explaination:**
watch out for variable scope. variables are ```0``` by default with most
compilers today. the rest is plain pre/post operations.

--------------------------------------------------------------------------------

6.

**answer:** 3. ```1 3 5 7 9```

**explaination:**
a bit like foo-bar. most go for ```1 3 5 7``` because there is a
```else if (y == 8) break;``` statement. however, that is never reached because
of a ```continue``` in the ```if (y % 2 == 0)``` before.

--------------------------------------------------------------------------------

7.

**answer:** 4. ```2 5 12 27 58```

**explaination:**
static variables.

--------------------------------------------------------------------------------

8.

**answer:** 2. ```8```

**explaination:**
a counting problem. the outer loop is ```i```, which goes through
```{1, 3, 5, 7, 9}``` and inner loop is ```j``` which goes through
```{0, 3, 6, 9}```. if ```j%i==0```, ```continue``` or increment ```sum``` which
is ```0``` initially.

 * ```0 % n``` is equal to ```0```
 * when ```i``` belongs to ```{1, 3}```, it always skips
 * we are left with ```i``` belongs to ```{5, 7, 9}``` and ```3``` increments of
sum per outer loop.
 * watch out for the last iteration, where ```j = 9``` and ```i = 9```

--------------------------------------------------------------------------------

9.

**answer:** 2. ```660```

**explaination:**
calculations. outer loop runs ```x``` times, inner loop runs ```y```
times, ```s = x * y```.

```for(i = p; i < q; i+=s)``` will run ```ceil((q-p)/s)```.

--------------------------------------------------------------------------------

10.

**answer:** 3. X'Z + XY

**explaination:**
boolean algebra.
```
f = XY + X'Z + YZ
  = XY + X'Z + YZ(X + X')  ... 1
  = XY + XYZ + X'Z + X'YZ  ... 2
  = XY(1 + Z) + X'Z(1 + Y) ... 3
  = XY + X'Z
```

--------------------------------------------------------------------------------

11.

**answer:** 3. ```-5```

**explaination:**
NA.

--------------------------------------------------------------------------------

12.

**answer:** 1. ```float```

**explaination:**
in the expression ```(x == 2) ? f : i```, implicit type conversion occurs
between ```f``` and ```i```. ```i``` is upcasted to a ```float```.

--------------------------------------------------------------------------------

13.

**answer:** 1. ```1711```

**explaination:**
order of precedence. the ```()``` are at a higher level of precedence than
```||```.

--------------------------------------------------------------------------------

14.

**answer:** 1. 6B 70 55 75  5A 6A 67 6B 70 75

**explaination:**
this is an elimination-type problem. things to know: ascii value of 'A' = 65.
going through options 1, 2, and 3; the first difference occurs at character 3,
viz. 'A'. 'A' in ```base-12``` is '55'. This eliminates option 3. The next
difference occurs at character 6, viz. 'R'. Quickly count up to R (18), and add
it to 64 (64 + 18 = 82). 'R' in ```base-12``` is '6A' (6 * 12 + 10). This
eliminates option 2, leaving option 1 as the answer. Check for other characters
at own discretion.

--------------------------------------------------------------------------------

15.

**answer:** 3. 20

**explaination:**
since it is specified that when ```n = 3```, ```h = 1```, a tree with 2 levels
shall have a height 1. Then, just keep counting powers of 2.
```
2 ^ 10 = 1024
2 ^ 20 ~= 1 million
2 ^ 21 ~= 2 million

n = 4 + x, x <= 4, h = 2
n ~= 1 million => h = 20
```

--------------------------------------------------------------------------------

16.

**answer:** 4. ```6 -6 0 1```

**explaination:**
```++c``` is never executed because ```++a && ++b``` evaluates to true.

--------------------------------------------------------------------------------

17.

**answer:** 3. ```9```

**explaination:**
the two's complement is the most common way of storing negative integers. thus,
```9``` is stored as ```0xfffffff9```. the rest is shift operators.

--------------------------------------------------------------------------------

18.

**answer:** 2. 0xC5000EED

**explaination:**
assuming you know what endian-ness is, this question simply becomes an
elimination-type question.
```
0xEFBEADDE => 0xDEADBEEF
0x02B0AD1B => 0x1BADB002

  0xDEADBEEF
^
  0x1BADB002
=
  0xqq000qqq
```
where ```q``` is a valid hex and part of the answer. but we are looking for
an option with 3 zeros in the middle. only fulfilled by option 2.

--------------------------------------------------------------------------------

19.

**answer:** 3. 3/52

**explaination:**
correct values (x) have the same value (x) whether stored MSB-first or
LSB-first. trying to brute-force 52 values is not really a good idea.

```
things to know: ascii values;
A = 65,
Z = 64 + 26 = 90

a = 97,
z = 96 + 26 = 122

A = 0100 0001 (base 2)
a = 0110 0001 (base 2)

only _correct_ values possible are:
0100 0100 = 68
0101 1010 = 90

0110 0110 = 102
0111 1110 = 126 !!OUT OF RANGE!!
```
thus, we have 3 possible _correct_ values. probability = ```3/56```.

--------------------------------------------------------------------------------

20.

**answer:** 4. ```5 4```

**explaination:**
pointer arithmetic.

--------------------------------------------------------------------------------

21.

**answer:** 3. ```0 5```

**explaination:**
do note that both pointers ```p``` and ```q``` point to the same variable
```a```. performing xor-swap on two pointers pointing to the same variable
_destroys_ it.

--------------------------------------------------------------------------------

22.

**answer:** 2. 0(log n)

**explaination:**
NA.
