#include <stdio.h>
#include <math.h>

int main(void)
{
	double height, distance, tree_height, degrees, radians;

	printf("나무와의 길이(단위 : m) : ");
	scanf_s("%lf", &distance);

	printf("측정자의 키(단위 : m) : ");
	scanf_s("%lf", &height);

	printf("각도(단위 : 도) : ");
	scanf_s("%lf", &degrees);

	radians = degrees * (3.141592 / 180.0);
	tree_height = tan(radians) * distance + height;
	printf("나무의 높이(단위 : m) : %lf \n", tree_height);

	return 0;
}