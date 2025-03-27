# Similarity to Java

    Since I do underastand Java, I'm gonna associate Java and C together.

## Similarities of Java and C

    1. Syntax Similarities
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

    2. Primitive Data Types
        int, float, double, and char exist in both languages.

        Size differences: In C, the size of types depends on the system architecture, while in Java they are standardized.

    3. Functions (Methods in Java)
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
    4. Pointers to Memory References
        Although Java doesn’t have explicit pointers, it uses references under the hood, which is somewhat similar to C pointers.

        Learning C will help you understand memory management at a deeper level, which is abstracted away in Java.

## Differences between Java and C

    1. Memory Management: In C, you’ll deal with manual memory management using malloc() and free(). In Java, the Garbage Collector handles memory for you.

    2. No OOP in C: C is procedural, not object-oriented, so no classes or objects.

    3. Pointers: C heavily relies on pointers, while Java uses references but hides direct memory access.

    4. No built-in exception handling in C: You’ll have to implement your own error-checking logic.

    5. Standard libraries: Java has extensive built-in libraries, whereas C has a smaller standard library but allows for closer-to-hardware operations.
