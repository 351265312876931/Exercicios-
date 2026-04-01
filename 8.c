#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1; 
    float x2, y2; 
    float dist;   

    printf("Ponto A: ");
    scanf("%f %f", &x1, &y1); 

    printf("Ponto B: ");
    scanf("%f %f", &x2, &y2); 

    dist = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));

    printf("Distancia de A e B = %f", dist);

    return 0;
    
}
