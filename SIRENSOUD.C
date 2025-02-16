#include <stdio.h>
#include <conio.h>
#include <dos.h>
void main()
{
 int i,j,k;
 for(k=0;k<3;k++)
 {
	for(i=500;i<1500;i++)
	{
		sound(i);
		delay(2);
		nosound();
	}

       for(i=1500;i>500;i--)
       {
	sound(i);
	delay(2);
	nosound();
       }
 }
 getch();
}