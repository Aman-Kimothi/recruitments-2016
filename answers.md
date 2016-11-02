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
this answer would seem queer, but is due to "alignment" of variables in a
struct. google
"[padding in c](https://www.google.com/search?q=padding+in+c)". oh, and watch
out for the ```printf``` being ```%x```.

--------------------------------------------------------------------------------

3.

**answer:** 3. ```31```

**explaination:**

 * ```(k % 1)``` is going to return ```0```, however, it is evaluated. the ```?:```
is just to throw off people.
 * the printf/foo() parameters are evaluated from right to left (generally).
