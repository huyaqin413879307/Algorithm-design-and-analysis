#include<stdio.h>
void main()
{
	int g, i, k, s, a[10];
	long m1, m2, m3;
	i = 1;
	a[1] = 1;
	s = 0;
	while (1) 
	{
		g = 1;
		for (k = i - 1; k >= 1; k--)
		{
			if (a[i] = a[k])
			{
				g = 0;
				break;
			}
		}
		if (i == 9 && g == 1 && a[1] < a[4])
		{
			m1= a[2] * 10 + a[3];  
			m2 = a[5] * 10 + a[6];  
			m3 = a[8] * 10 + a[9];
			if (a[1] * m2*m3 + a[4] * m1*m3 == a[7] * m1*m2)
			{
				printf("(%2d)", ++s);
				printf("%d/%ld+%d/%ld = %d/%ld", a[1], m1, a[4], m2, a[7], m3);
				if (s % 2 == 0) { printf("\n"); }
			}
		}
		if (i < 9 && g == 1) 
		{ i++; a[i] = 1; continue; }
		while (a[i] == 9 && i > 1) 
		{ 
			i--; }
		if (a[i] == 9 && i == 1) 
		{
			break;
		}
		else
		{
			a[i]++;
		}
	}
	printf("��������%d���⡣\n", s);
}

