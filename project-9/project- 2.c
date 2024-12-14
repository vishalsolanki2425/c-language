#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float chem_marks;
    float maths_marks;
    float phy_marks;
};

int main() {
    struct Student students[5];
    float percentage[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Name: ");
        scanf(" %[^\n]%*c", students[i].name); 

        printf("Marks in Chemistry (out of 100): ");
        scanf("%f", &students[i].chem_marks);

        printf("Marks in Mathematics (out of 100): ");
        scanf("%f", &students[i].maths_marks);

        printf("Marks in Physics (out of 100): ");
        scanf("%f", &students[i].phy_marks);

        percentage[i] = (students[i].chem_marks + students[i].maths_marks + students[i].phy_marks) / 3.0;
    }
    
	printf("\n Mark Sheet:\n");
	
	printf(" Roll No  Name              Chemistry  Mathematics  Physics    %%     \n");
    for (int i = 0; i < 5; i++) {
        printf(" %-8d  %-17s  %-9.2f  %-11.2f  %-7.2f  %-5.2f \n",
               students[i].roll_no, students[i].name, students[i].chem_marks,
               students[i].maths_marks, students[i].phy_marks, percentage[i]);
    }

    return 0;
}
