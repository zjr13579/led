
#define GPJ2CON (*(volatile unsigned int*)0xE0200280)
#define GPJ2DAT (*(volatile unsigned int*)0xE0200284)


int  main(void)
{
	GPJ2CON=0x1111;
	GPJ2DAT=0x0;
	while(1)
	{
		int led=0x1111;
		int i;
		for(i=0;i<4;i++)
		{
			led=led&(0x1<<i);
		}
	}
	return 0;
}