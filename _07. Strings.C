#include <stdio.h>
#include <string.h>
int main() {
    char first_name[] =  "Paila";
    char middle_name[] = "Karuna";
    char last_name[]  = "raj";
    char branch[10];
    printf("Length of the string %d\n", strlen(first_name));
printf("combine two strings:%s\n", strcat(first_name,middle_name));
strcpy(branch,"Biotech");
printf("branch is %s\n", branch);

    return 0;
}

Length of the string 5
combine two strings:PailaKaruna
branch is Biotech


=== Code Execution Successful ===
