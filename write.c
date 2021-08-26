#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE * fpointer = fopen("employees.txt", "a");

    fprintf(fpointer, "Kelly, Customer Service\n");

    fclose(fpointer);
    return 0;
}
