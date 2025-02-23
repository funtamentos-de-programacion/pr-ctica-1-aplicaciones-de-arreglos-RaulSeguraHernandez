#include <stdio.h>

int main(){
    int a[] = {1,2,3};
    printf("%p\n", &a);
    printf("%p\n", &a[0]);
    
    return 0;
}
