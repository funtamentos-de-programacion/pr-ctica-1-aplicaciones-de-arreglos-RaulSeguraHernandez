#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5};
    printf("int\n");
    for(int i=0;i<5;i++){
        printf("%p\n", &arr[i]);
    }

    printf("char\n");
    char arrch[]={'a','b','c','d','e'};
    for(int i=0;i<5;i++){
        printf("%p\n", &arrch[i]);
    }

    printf("double\n");
    double arrdoub[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("%p\n", &arrdoub[i]);
    }
    return 0;
}
