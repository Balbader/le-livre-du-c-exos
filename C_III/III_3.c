#include <stdio.h>

int main(void)
{
	float	rayon;
	float	perimetre;
	float	aire;
	float	pi;

	pi = 3.14159;
	rayon = 5.27e5;
	perimetre = 2 * pi * rayon;
	aire = (rayon * rayon) * pi;

	printf("rayon\t\t: %.3e\nperimetre\t: %.3e\naire\t\t: %.3e\n", rayon, perimetre, aire);

	return 0;
}
