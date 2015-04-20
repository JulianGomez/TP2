/* Gomez Julian 153.605-9
    20150419
*/

#include <stdio.h>  
 
int main()   
{                    

printf("\nIntroduzca una cadena, EOF para terminar:\n");
 
int c;
int caracterEspecial= 0; 

while ( (c = getchar()) !=  EOF )
{   

caracterEspecial= 0;

if (c == '\t')
{
printf("\\t");
caracterEspecial= 1;
}

if (c == '\b')
{
printf("\\b");
caracterEspecial= 1;
}

if (c == '\\')
{
printf("\\");
caracterEspecial= 1;
}

if caracterEspecial== 0)
{
printf("%c",c);
}

}     
}     
