#include <stdio.h>

main() {
    int count = 15, y, z[10];
    
    printf("The memory of count is %p, y is %p, z is %p\n",&count,&y,&z);
    
    printf("The value of count is %d\n",count);

    int *ptr;       
    printf("The memory of ptr is %p\n",&ptr);
    
    ptr = &count;
    printf("The value that keep in ptr is %p\n",ptr);
    
    y = *ptr;
    printf("The memory of y is %p and value of y is %d\n",&y,y);
    
    *ptr = 0;
    printf("The value of count variable is %d\n",count);
    
    ptr = &z[0];
    printf("The value that keep in ptr is %p = memory of %p",ptr,&z);
}
 