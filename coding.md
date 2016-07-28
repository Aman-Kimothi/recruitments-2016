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

	unsigned int a = 32, b = 5, c = (a |= 0xA, b = ~b, c = a|(b&0xf));
	printf("%d", c);

a) 47
b) 45
c) 42
d) None of the above

--------------------------------------------------------------------------------
