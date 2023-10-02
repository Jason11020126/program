#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
   scanf("%d",&a);scanf("%d",&b);scanf("%d",&c);
    printf("%.1f\n%.1f", (b*(-1) + sqrt(b * b - 4 * a * c)) / (2 * a), (b*(-1) - sqrt(b * b - 4 * a * c)) / (2 * a));
    return 0;
}
