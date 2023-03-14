# 0x0B. C - malloc, free
##  Automatic allocation
When you declare variables or when you use strings within double quotes, the program is taking care of all the memory allocation. You do not have to think about it.

## Dynamic allocation
The malloc() function allocates size bytes and returns a pointer to the allocated memory but the memory is not initialized.
When the allocated memory is not needed anymore, you must return it to the operating system by calling the function free()

