#include <stdio.h>
 
extern int count;
 
void write_extern(void) {

   printf("La cuenta es %d\n", count);

}
