1.
Question 1
A class type called "Pair" has already been defined for you. You need to write a function called pairFactory that creates an instance of Pair on the heap. Do not create the object on the stack. Then, your function needs to return a pointer to that created object.

Tips:

- An "instance of" a class type means one variable that is created with this type. We talk this way to clearly distinguish between the class type itself and specific variables that have this class type. For example, if you declare "Pair p;" then p is an instance of Pair. Also, it is common to say that an instance of a class is an "object".

- If you are stuck, please review: How do you create a variable on the stack? How do you create one on the heap?

- If you see the server message "InfraError," it means your program crashed with a segfault, typically. In this case, it's likely you returned an invalid address. Make sure you are creating the Pair on the heap.

- Pointers are variables that store memory addresses as their actual value. The pointer is said to "point to" whatever is located at the address that it stores. Returning a pointer means returning a copy of the pointer itself, that is, the address that the pointer stores, not a copy of the thing that is pointed to. 

- Pointer variables are also located at addresses in memory, of course, but the address where the pointer is located is different from the address that it contains as its value.
