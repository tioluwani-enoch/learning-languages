# Similarity to Java

Since I do underastand Java, I'm gonna associate Java and C together.

## Similarities of Java and C

1.  Syntax Similarities
    ```
    // Java
    if (x > 10) {
    System.out.println("Big number");
    }

            // C
            if (x > 10) {
            printf("Big number\n");
            }
        ```

2.  Primitive Data Types
    int, float, double, and char exist in both languages.

    Size differences: In C, the size of types depends on the system architecture, while in Java they are standardized.

3.  Functions (Methods in Java)
    ```
    // Java
    int add(int a, int b) {
    return a + b;
    }

            // C
            int add(int a, int b) {
                return a + b;
            }
        ```

4.  Pointers to Memory References
    Although Java doesn’t have explicit pointers, it uses references under the hood, which is somewhat similar to C pointers.

    Learning C will help you understand memory management at a deeper level, which is abstracted away in Java.

## Differences between Java and C

1. Memory Management: In C, you’ll deal with manual memory management using malloc() and free(). In Java, the Garbage Collector handles memory for you.

2. No OOP in C: C is procedural, not object-oriented, so no classes or objects.

3. Pointers: C heavily relies on pointers, while Java uses references but hides direct memory access.

4. No built-in exception handling in C: You’ll have to implement your own error-checking logic.

5. Standard libraries: Java has extensive built-in libraries, whereas C has a smaller standard library but allows for closer-to-hardware operations.

## Variable types in C

1. Integers - whole numbers which can be either positive or negative. Defined using char, int, short, long or long long.

2. Unsigned integers - whole numbers which can only be positive. Defined using unsigned char, unsigned int, unsigned short, unsigned long or unsigned long long.

3. Floating point numbers - real numbers (numbers with fractions). Defined using float and double.

## Things I noted in C

1. C also likes you to put a semicolon (;) after every line of code.
2. C is also just really funny. No real way to store a String than as an arraya of characters therefore,
   `char strName[] = "Hello World";`
3. Also uses the main method also you have to always return a 0 in the method becasue that showws C that the main function has been compiled and run successfully.
4. You can also use a ```char* strName for this as well, but you might need to use malloc and free for memory allocation. Little explanation from ChatGPT:
   Using char* strName; alone would point to an undefined location, causing undefined behavior. By allocating memory with malloc(), we ensure the pointer has a valid memory block to store the user's input.

## New stuff I learned

1. I also learned how to compare strings by using `strcmp` as well as how to colect user input using `scanf` learned about functions and the likes.
2. When building a HTTP server with C we follow this process.
   a. SOCKET:
   b. BIND:
   c. LISTEN:
   d. ACCEPT:
   e. READ/WRITE:
