// Option 12
#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main(){
    printf("Hello, Teacher");
    double a, val, z1, z2,z1_1, z1_2;
    val = PI / 180; // degree --> radian

    printf("        sin4a       cos4a    \n z1 = --------- * --------- \n      1 + cos4a   1 + cos2a");
    printf("\n\n z2 = ctg((3*PI)/2 - a)");
    printf("\n\nEnter the value a = ");
    scanf("%lf", &a);//input = radian

    //calculate z1 and z2
    z1 =  ((sin(val*4*a)) / (1 + cos(val*4*a))) * ( (cos(2*a*val)) / (1 + cos(val*2*a)));
    z2 = (1 / (tan(((3*PI/2) - a * val))));

    // condition to avoid meaningless z1
    if ((1 + cos(4*a*val)) == 0 || (1 + cos(2*a*val)) == 0)
    {
        // z1 does not exist
        printf(" Re-enter a, cannot calculate z1 !");
        // only result z2
        printf("\n z2 = %lf", z2);
    }else{
    //result z1 & z2
    printf("\n z1 = %lf", z1);
    printf("\n z2 = %lf", z2);
    }
    return 0;
}
