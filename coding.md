What is the output of the following code?

	char str[] = "rythm";
	char *p = str;

	printf("%s", p +++ (127 ^ 125));

a) ythm
b) thm
c) hm
d) None of the above

--------------------------------------------------------------------------------

What is the output of the following code when compiled on an 64-bit machine?

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

--------------------------------------------------------------------------------

What is the output of the following code?

	int i = 0;
	printf("%d%d", ((++i % 1) ? i : i + 1), ((i++ % 1) ? i + 1 : i) );

a) 21
b) 11
c) 31
d) None of the above

--------------------------------------------------------------------------------

What is the output of the following code?

	unsigned int a = 32, b = 5, c = (a ^= 0xA, b = ~b, c = a^(b&0xf));
	printf("%d", c);

a) 37
b) 45
c) 32
d) 42

--------------------------------------------------------------------------------

What is the output of the following code?

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

--------------------------------------------------------------------------------

What is the output of the following code?

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

--------------------------------------------------------------------------------

