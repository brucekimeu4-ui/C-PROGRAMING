/*
NAME:Bruce Kimeu
REG:CT100/G/30761/26
DESCRPTION:ASIGN WEEK 3 TASK 3
*/

#include <stdio.h>

int main() {
    int choice;

    // Display mobile data bundle menu
    printf("====================================\n");
    printf("       MOBILE DATA BUNDLES\n");
    printf("====================================\n");
    printf("1. 100 MB    - KES 50\n");
    printf("2. 500 MB    - KES 200\n");
    printf("3. 1 GB      - KES 350\n");
    printf("4. 2 GB      - KES 600\n");
    printf("====================================\n");

    // Get user's choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Process the selected bundle
    switch (choice) {
        case 1:
            printf("\nBundle Selected: 100 MB\n");
            printf("Cost: KES 50\n");
            break;

        case 2:
            printf("\nBundle Selected: 500 MB\n");
            printf("Cost: KES 200\n");
            break;

        case 3:
            printf("\nBundle Selected: 1 GB\n");
            printf("Cost: KES 350\n");
            break;

        case 4:
            printf("\nBundle Selected: 2 GB\n");
            printf("Cost: KES 600\n");
            break;

        default:
            printf("\nInvalid choice. Please select a number between 1 and 4.\n");
    }

    return 0;
}