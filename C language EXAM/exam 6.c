#include <stdio.h>
#include <string.h>

struct Mobile 
{
    char company_name[50];
    char color[20];
    char model[50];
    float price;
};

int main() 
{
    int n , i;

    printf("Enter the number of mobile : ");
    scanf("%d", &n);

    struct Mobile mobiles[n];

    for (i = 0; i < n; i++) 
	{
        printf("\nEnter details for mobile %d : \n", i + 1);
        printf("Company Name : ");
        scanf("%s", mobiles[i].company_name);
        printf("Color : ");
        scanf("%s", mobiles[i].color);
        printf("Model : ");
        scanf("%s", mobiles[i].model);
        printf("Price : ");
        scanf("%f", &mobiles[i].price);
    }

    printf("\nDetails of all mobiles:\n");
    
    for (i = 0; i < n; i++)
	{
        printf("\nMobile %d :\n", i + 1);
        printf("Company Name: %s\n", mobiles[i].company_name);
        printf("Color : %s\n", mobiles[i].color);
        printf("Model : %s\n", mobiles[i].model);
        printf("Price : %.2f\n", mobiles[i].price);
    }
}
