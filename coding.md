1) What is the output of the following code?

	char str[] = "rythm";
	char *p = str;

	printf("%s", p +++ (127 ^ 125));

a) ythm
b) thm
c) hm
d) None of the above

ans: b)

--------------------------------------------------------------------------------

2) What is the output of the following code when compiled on an 64-bit machine?

	struct node {
		char val;
		void* ptr;
	};

	struct node p[2];
	printf("%x", (unsigned int)&p[1] - (unsigned int)p);

a) 1
b) 5
c) 8
d) 10

ans: d)

--------------------------------------------------------------------------------

3) What is the output of the following code?

	int i = 0;
	printf("%d%d", ((++i % 1) ? i : i + 1), ((i++ % 1) ? i + 1 : i) );

a) 21
b) 11
c) 31
d) None of the above

ans: c)

--------------------------------------------------------------------------------

4) What is the output of the following code?

	unsigned int a = 32, b = 5, c = (a ^= 0xA, b = ~b, c = a^(b&0xf));
	printf("%d", c);

a) 37
b) 45
c) 32
d) 42

ans: c) 32

--------------------------------------------------------------------------------

5) What is the output of the following code?

	int x = 5;
	{
		int x = x == ++x;
		printf("%d %d ", x++, x);
	}
	printf("%d", x);

a) 0 1 6
b) 1 2 5
c) 0 2 5
d) NOTA

ans: b) 1 2 5

--------------------------------------------------------------------------------

6) What is the output of the following code?

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

a) 1 3 5 7
b) 0 2 4 6
c) 1 3 5 7 9
d) None of the above

ans: c)

--------------------------------------------------------------------------------

7) What is the output of the following code?

	void iter(int *i) {
		static int x = 1;
		x += x + i;
		printf("%d ", x);
		++*i;
	}
	for (int i = 0; i < 5; iter(&i));

a) 4 10 22 46 94
b) 2 3 4 5 6
c) 2 4 8 16 32
d) 2 5 12 27 58

ans: d) 

--------------------------------------------------------------------------------

8) What is the output of the following code?

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

a) 7
b) 8
c) 9
d) Compiler Error

ans: 8

--------------------------------------------------------------------------------

9) What is the value of `s` after execting this code?

	int i, j, s = 0;
	for (i = 13; i < 568; i += 17) {
		for (j = 23; j < 750; j += 37) {
			s++;
		}
	}

a) 693
b) 660
c) 714
d) 680

ans: b) 660

--------------------------------------------------------------------------------

10) XY + X'Z + YZ = 

a) X'Z + X'Y
b) XZ + XY'
c) X'Z + XY
d) X'Z + XY'

ans: c) x'z + xy

--------------------------------------------------------------------------------

11) What is the output of the following code?

  unsigned int x = -5;
  printf("%d", x);

a) compile error
b) runtime error
c) -5
d) 0xfffffffb

ans: c) 

--------------------------------------------------------------------------------

12) What is the output of the following code?

  int x = 1;
  short int i = 2;
  float f = 3;
  if (sizeof((x == 2) ? f : i) == sizeof(float))
      printf("float\n");
  else if (sizeof((x == 2) ? f : i) == sizeof(short int))
      printf("short int\n");


a) float
b) short int
c) Undefined behaviour
d) Compile time error


ans: a) float

--------------------------------------------------------------------------------

13)

	int a  = 5, b = 10, c = 17;
	int z = ( (a++ & b++ == 0) || (++a & b) ) || (c ^ b > 0);
	printf("%d%d%d", z, a, b);

a) 1711
b) 1611
c) 1610
c) 1710

ans: a) 1711

--------------------------------------------------------------------------------

14) The accuracy of Pathfinder's camera falls, causing Mark Watney to switch
from 16 divisions (0-F) to 12 divisions (0-B) to prevent information
loss. Encode the following message to be sent by JPL:
STAY FROSTY

a) 6B 70 55 75  5A 6A 67 6B 70 75
b) 6B 70 55 75  5A 6B 67 70 71 75
c) 6B 70 57 75  5A 6A 67 6B 70 75
d) NOTA

ans: a)

--------------------------------------------------------------------------------

15) What is the minimum height of a BST with 1.2 million nodes?

a) 18
b) 19
c) 20
d) 21

ans: c)

--------------------------------------------------------------------------------

16) 

  int a = 5, b = -7, c = 0, d;
  d = ++a && ++b || ++c;
  printf("%d %d %d %d", a, b, c, d);

a) 6 -6 0 0
b) 6 -5 0 1
c) -6 -6 0 1
d) 6 -6 0 1

ans: d)

--------------------------------------------------------------------------------

17)

	printf("%x", ( ((-7 << 28) & 0xffffffff) >> 28) );

a) 7
b) 8
c) 9
d) Compiler error

ans: c) 9

--------------------------------------------------------------------------------

18)

Debugging data transmission from two peripherals, you find that they
are transmitting data with the wrong endian-ness. If the data from the two
peripherals is to be XOR-ed, what is the result (corrected) if
the data from the peripherals is: 0xEFBEADDE, and 0x2B0AD1B

a) 0xED0E00C5
b) 0xC5000EED
c) 0xF77DB57B
d) 0x400DB5D8

--------------------------------------------------------------------------------

19)

When getting wrong data values from sensors, you observe that LSB is being sent
first. Assuming the sensor only sends values in between (and including) A-Z, a-z;
what is the probability that you are getting a correct value?

a) 0
b) 1/52
c) 3/52
d) 4/52

--------------------------------------------------------------------------------

20) Output on 32-bit compiler

	char arr[5];
	printf("%d", sizeof(arr+2));

a) 5 1
b) 5 3
c) 5 5
d) 5 4


21) 

	void swap(int *a, int *b) {
		*a ^= *b;
		*b ^= *a;
		*a ^= *b;
	}

	int a = 5, b = a;
	int *p = &a, *q = p;
	swap(p, q);
	printf("%d %d", a, b);

a) 5 5
b) 0 0
c) 0 5
d) Compile error

22) What is the average search complexity of a BST?

a) 0(n)
b) 0(log n)
c) 0(n log n)
d) None of the Above

