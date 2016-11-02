1. What is the output of the following code?

```c
  char str[] = "rythm";
  char *p = str;

  printf("%s", p +++ (127 ^ 125));
```

1. ```ythm```
2. ```thm```
3. ```hm```
4. None of the above

--------------------------------------------------------------------------------

2. What is the output of the following code when compiled on an 64-bit machine?

```c
  struct node {
    char val;
    void* ptr;
  };

  struct node p[2];
  printf("%x", (unsigned int)&p[1] - (unsigned int)p);
```

1. ```1```
2. ```5```
3. ```8```
4. ```10```

--------------------------------------------------------------------------------

3. What is the output of the following code?

```c
  int i = 0;
  printf("%d%d", ((++i % 1) ? i : i + 1), ((i++ % 1) ? i + 1 : i) );
```

1. ```21```
2. ```11```
3. ```31```
4. None of the above

--------------------------------------------------------------------------------

4. What is the output of the following code?

```c
  unsigned int a = 32, b = 5, c = (a ^= 0xA, b = ~b, c = a^(b&0xf));
  printf("%u", c);
```

1. ```37```
2. ```45```
3. ```32```
4. ```42```

--------------------------------------------------------------------------------

5. What is the output of the following code?

```c
  int x = 5;
  {
    int x = x == ++x;
    printf("%d %d ", x++, x);
  }
  printf("%d", x);
```

1. ```0 1 6```
2. ```1 2 5```
3. ```0 2 5```
4. None of the above

--------------------------------------------------------------------------------

6. What is the output of the following code?

```
  int x = 2;
  int y = 0;
  for ( ; y < 10; ++y) {
    if (y % x == 0)
      continue;
    else if (y == 8)
      break;
    else
      printf("%d ", y);
  }
```

1. ```1 3 5 7```
2. ```0 2 4 6```
3. ```1 3 5 7 9```
4. None of the above

--------------------------------------------------------------------------------

7. What is the output of the following code?

```c
  void iter(int *i) {
    static int x = 1;
    x += x + *i;
    printf("%d ", x);
    ++*i;
  }
  for (int i = 0; i < 5; iter(&i));
```

1. ```4 10 22 46 94```
2. ```2 3 4 5 6```
3. ```2 4 8 16 32```
4. ```2 5 12 27 58```

--------------------------------------------------------------------------------

8. What is the output of the following code?

```c
  int sum=0;
  for(int i=1;i<=10;i+=2)  {
    for(int j=0;j<=10;j+=3) {
      if(j%i==0)
        continue;
      else
        sum++;
    }
  }
  printf("%d",sum);
```

1. ```7```
2. ```8```
3. ```9```
4. Compiler Error

--------------------------------------------------------------------------------

9. What is the value of ```s``` after execting this code?

```c
  int i, j, s = 0;
  for (i = 13; i < 568; i += 17) {
    for (j = 23; j < 750; j += 37) {
      s++;
    }
  }
```

1. ```693```
2. ```660```
3. ```714```
4. ```680```

--------------------------------------------------------------------------------

10. XY + X'Z + YZ =

1. X'Z + X'Y
2. XZ + XY'
3. X'Z + XY
4. X'Z + XY'

--------------------------------------------------------------------------------

11. What is the output of the following code?

```c
  unsigned int x = -5;
  printf("%d", x);
```

1. compile error
2. runtime error
3. ```-5```
4. ```0xfffffffb```

--------------------------------------------------------------------------------

12. What is the output of the following code?

```c
  int x = 1;
  short int i = 2;
  float f = 3;
  if (sizeof((x == 2) ? f : i) == sizeof(float))
    printf("float\n");
  else if (sizeof((x == 2) ? f : i) == sizeof(short int))
    printf("short int\n");
```

1. ```float```
2. ```short int```
3. Undefined behaviour
4. Compile time error

--------------------------------------------------------------------------------

13. What is the output of the following code?

```c
  int a  = 5, b = 10, c = 17;
  int z = ( (a++ & b++ == 0) || (++a & b) ) || (c ^ b > 0);
  printf("%d%d%d", z, a, b);
```

1. ```1711```
2. ```1611```
3. ```1610```
4. ```1710```

--------------------------------------------------------------------------------

14. Mark Watney, who is stranded on Mars after being mistaken dead by his crew,
find the _Pathfinder_, a rover from a previous mission. He wants to use it's
camera to transmit messages to earth. After initially using hexadecimal to code
his messages in ASCII, he decides to switch to duodecimal system for improving
the accuracy. Help the team at JPL encode the following message for Mark:
STAY FROSTY

1. 6B 70 55 75  5A 6A 67 6B 70 75
2. 6B 70 55 75  5A 6B 67 70 71 75
3. 6B 70 57 75  5A 6A 67 6B 70 75
4. None of the above

--------------------------------------------------------------------------------

15. What is the minimum height (h) of a Binary Tree with 1.2 million (n) nodes?
(eg., n = 3, h = 1)

1. 18
2. 19
3. 20
4. 21

--------------------------------------------------------------------------------

16.

```c
  int a = 5, b = -7, c = 0, d;
  d = ++a && ++b || ++c;
  printf("%d %d %d %d", a, b, c, d);
```

1. ```6 -6 0 0```
2. ```6 -5 0 1```
3. ```-6 -6 0 1```
4. ```6 -6 0 1```

--------------------------------------------------------------------------------

17.

```c
  printf("%x", ( ((-7 << 28) & 0xffffffff) >> 28) );
```

1. ```7```
2. ```8```
3. ```9```
4. Compiler error

--------------------------------------------------------------------------------

18.

Debugging data transmission from two peripherals, you find that they
are transmitting data with the wrong endian-ness. Assuming a 32-bit environment,
`output` be the XOR-ed data from two peripherals, what will be the (correct)
value of `output` if the data is: 0xEFBEADDE, and 0x2B0AD1B

1. 0xED0E00C5
2. 0xC5000EED
3. 0xF77DB57B
4. 0x400DB5D8

--------------------------------------------------------------------------------

19.

When getting wrong data values from sensors, you observe that data is being sent
LSB-first. Assuming the sensor only sends character values (A-Z, a-z), what is
the probability that you got a correct value upon receiving one value?

1. 0
2. 1/52
3. 3/52
4. 4/52

--------------------------------------------------------------------------------

20. What is the output of the following code snippet on a 32-bit compiler?

```c
  char arr[5];
  printf("%d %d", sizeof(arr), sizeof(arr+2));
```

1. ```5 1```
2. ```5 3```
3. ```5 5```
4. ```5 4```

--------------------------------------------------------------------------------

21.

```c
  void swap(int *a, int *b) {
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
  }

  int a = 5, b = a;
  int *p = &a, *q = p;
  swap(p, q);
  printf("%d %d", a, b);
```

1. ```5 5```
2. ```0 0```
3. ```0 5```
4. Compile error

--------------------------------------------------------------------------------

22. What is the average search complexity of a Binary Search Tree ?

1. 0(n)
2. 0(log n)
3. 0(n log n)
4. None of the Above

