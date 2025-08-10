#include <stdio.h>
int main(){   
float PI=3.14,radius, area;  
printf("Enter the radius of the circle: ");  
scanf("%f", &radius);  
area = PI * radius * radius;  
printf("The area of the circle is: %f", area);  
return 0;  
}  