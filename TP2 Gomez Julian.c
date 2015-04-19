#include <stdio.h>  
 
int main()   
{                    

printf("\nIntroduzca una cadena, EOF para terminar:\n");
 
int c;
int letra = 1; 

while ( (c = getchar()) !=  EOF )
{   

letra = 1;

if (c == '\t')
{
printf("\\t");
letra = 0;
}

if (c == '\b')
{
printf("\\b");
letra = 0;
}

if (c == '\\')
{
printf("\\");
letra = 0;
}

if (letra == 1)
{
printf("%c",c);
}

}     
}     
