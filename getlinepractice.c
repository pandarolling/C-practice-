#include <stdio.h>
#include <stdlib.h>

int main() {
    char *buffer = (char *)malloc(100 * sizeof(char));
    
    if (buffer == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    printf("Enter text: ");
    fgets(buffer, 100, stdin);
    
    printf("You entered: %s", buffer);
    
    free(buffer);
    return 0;
}