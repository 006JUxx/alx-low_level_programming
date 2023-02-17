#include <stdio.h>
#include <stdlid.h>

/**
 * main - prints all possible combination of three digits
 * Return: Always 0
 */
int main(void)
{
	int c;
	int d;
	int o =0;
	 while(o < 10)
	 {	
		 d=0;
                 while (d < 10)
		 {
			 c = 0;
			 while (c < 10)
			 {
				 if (c != d && d != o && o < d < c)
				 {
					 putchar('0 + o);
					 putchar('0 + d);
					 putchar('0 + C);
					 if (c + d + o != 0 + 0 + 3)
					 {
						 putchar(',')
						 putchar(' ') 
					 }
				 }
				 c++;
			 }
			 d++;
		 }
		 o++;
	 }
		 putchar('\n');
		 return(0);
}

