#include <stdio.h>

int main() {
    int array[100];
    int searchedInfo;
    int foundInfo=-1;

    for(int i=0; i<100; ++i){
        array[i]= i * 2;
        printf("%d\t", array[i]);
    }
    printf("\nEnter the number to search:");
    scanf("%d", &searchedInfo);

    for(int i=0; i<100; i++){
        if(searchedInfo==array[i]) {
            foundInfo = i;
            printf("Searched Info %d --> found in %d\n",searchedInfo, foundInfo);
            break;
        }
    }
    if(foundInfo == -1) {
        printf("Searched Info %d not found.\n", searchedInfo);
    }
    return 0;
}
