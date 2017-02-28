#include<stdio.h>

void print_bytes(const void *object, size_t size);
int main(){
    
   int x = 37;
   float y = 3.14;

   printf("%ld\n",sizeof(y));
   print_bytes(&x, sizeof x);
   print_bytes(&y, sizeof y);

   printf("%p\n,%p\n",&x,&y);

   char* z = (char*)0x7fff594e9858;
   print_bytes(z, sizeof z);



    return 0;
}

void print_bytes(const void *object, size_t size)
{
  const unsigned char * const bytes = object;
  size_t i;

  printf("[ ");
  for(i = 0; i < size; i++)
  {
    printf("%02x ", bytes[i]);
  }
  printf("]\n");
}
