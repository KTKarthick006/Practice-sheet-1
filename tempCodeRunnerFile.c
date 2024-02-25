#include <stdio.h>

int main ()
{
    int hardness, tensile;
    float carbon;
    printf("Enter the hardness, tensile strength and carbon content of the steel: ");
    scanf("%d %d %f", &hardness, &tensile, &carbon);

    if (hardness > 60 && carbon < 0.9 && tensile > 6000)
    {
        printf("Steel grade is 10");
    }
    else if (hardness > 60 && carbon < 0.9)
    {
        printf("Steel grade is 9");
    }
    else if (carbon < 0.9 && tensile > 6000)
    {
        printf("Steel grade is 8");
    }
    return 0;
}
