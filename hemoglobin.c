#include <stdio.h>
int main() {

     char gender;
    float age;
    float hemoglobin;

    printf(" --- H.I.R.A --- \n");
    printf("--- Hemoglobin Interpretation Analysis Report ---\n");

    printf("Enter your age: ");
    scanf("%f", &age);
    
    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);
    
    printf("Enter your hemoglobin value (g/dL): ");
    scanf("%f", &hemoglobin);

    printf("--- Analysis Result ---\n");

    // Infants
    if ( age < 1 ) {
        if ( hemoglobin < 9.5)
        printf("LOW hemoglobin (Possible infant Anemia)\n");
        
        else if( hemoglobin > 14 ) 
        printf("HIGH hemoglobin (Possible Polycythemia)");

        else 
        printf("Normal hemoglobin\n");
   }
   
   // Children
    else if (age >= 1 && age < 13) {

        if (hemoglobin < 11.0)
            printf("LOW Hemoglobin \n");
        else if (hemoglobin > 15.5)
            printf("HIGH Hemoglobin\n");
        else
            printf("NORMAL Hemoglobin (Child Range)\n");
    }

    // Adults
    else if (age >= 13 && age < 60) {

        if (gender == 'M' || gender == 'm') {

            if (hemoglobin < 13.5) {
                printf("LOW Hemoglobin\n");

                if (hemoglobin >= 10)
                    printf("Severity: Mild Anemia\n");
                else if (hemoglobin >= 7)
                    printf("Severity: Moderate Anemia\n");
                else
                    printf("Severity: Severe Anemia\n");
            }

            else if (hemoglobin > 17.5)
                printf("HIGH Hemoglobin (Possible Polycythemia or, Dehydration)\n");
            else
                printf("NORMAL Hemoglobin (Adult Male Range)\n");
        }

        else if (gender == 'F' || gender == 'f') {

            if (hemoglobin < 12.0) {
                printf("LOW Hemoglobin (Anemia)\n");

                if (hemoglobin >= 10)
                    printf("Severity: Mild Anemia\n");
                else if (hemoglobin >= 7)
                    printf("Severity: Moderate Anemia\n");
                else
                    printf("Severity: Severe Anemia\n");
            }

            else if (hemoglobin > 15.5)
                printf("HIGH Hemoglobin\n");
            else
                printf("NORMAL Hemoglobin\n");
        }

        else {
            printf("Invalid gender input.\n");
        }
    }

    // Elders
    else {

        if (gender == 'M' || gender == 'm') {

            if (hemoglobin < 13.0)
                printf("LOW Hemoglobin\n");
            else if (hemoglobin > 17.0)
                printf("HIGH Hemoglobin\n");
            else
                printf("NORMAL Hemoglobin \n");
        }

        else if (gender == 'F' || gender == 'f') {

            if (hemoglobin < 11.5)
                printf("LOW Hemoglobin \n");
            else if (hemoglobin > 15.0)
                printf("HIGH Hemoglobin\n");
            else
                printf("NORMAL Hemoglobin \n");
        }

        else {
            printf("Invalid gender input.\n");
        }
    }

    printf("\nNote: This program is for educational purposes only.\nCreated by Shivam Sagar\n");
    return 0;
}

