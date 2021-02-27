# Dynamic Memory Allocation 101

Standard format of memory allocation within C is static allocation where the data is stored in a stack. The size of the memory for this type of allocation needs to be determined at compile time. The more efficient method of using the memory is called Dynamic allocation. In Dynamic allocation of memory, the data is stored in a heap. The size of memory for this type of allocation is determined at runtime. 

1. This program dynamically create a 3-dimensional array a of dimensions 3 × 4 × 3, initializes it with proper values, and shows how to access element a[2][0][1] using pointer arithmetic. Additionally, a matrix printing function is created that helps in visualizing the matrix that has been created. 
NOTE: We always need to free our dynamically-allocated memory.

2. Next, a function is created which takes input of the number of rows and columns of an array and outputs a 2D array. The whole array is initialized with the same element. This code will help in getting use to malloc() and free() functions at a very basic level. 

3. Finally, a copy function is created that copies an 2-dimensional array. Keeping in mind that, modifying the result of this function should not modify the original array.

Arrays are the most basic forms of data structures that are used within most engineering applications. Using dynamic allocation makes the program more efficient.
