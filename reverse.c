#include <stdio.h>

//Herfleri tersden yazdirmaq

void printReverse(char*);

int main()
{
    char message[100];

    puts("Enter a sentence");
    gets(message);

    printReverse(message);
    return 0;
}
void printReverse(char* ptr) 
{
    int i=0, length=0;
    length=strlen(ptr);
    for(i=length-1; i>=0; i--){
      putchar(*(ptr+i));
    }
}