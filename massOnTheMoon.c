/* Gravitation on the Moon
 * The gravitational field of the Moon is approximately 17% of that on the Earth. Write a program that calculates
 * the weight of a man on the moon by a given weight on the Earth.
 */

#include <stdio.h>


int main(void) 
{
	float n;
	printf("Your weight: ");
	scanf("%f", &n);
	printf("On the Moon your weight will be: %.3f\n", n * 0.17);
	return 0;
}