#include <stdio.h>

struct Structure{
    
    int a[4][3][2];
};

int main() {
    int i,j,k;
    struct Structure s;
    
    printf("Random values: \n");
    for (i=0 ; i<4 ; i++){
        for (j=0 ; j<3 ; j++){
            for (k=0 ; k<2 ; k++){
                s.a[i][j][k] = rand()%100;
                printf("Value of a[%d][%d][%d]: ", i+1,j+1,k+1);
                printf("%d \n", s.a[i][j][k]);
            }
        }
    }
    
    printf("\nPrinting the values:\n");
    
    for (i=0 ; i<4 ; i++){
        for (j=0 ; j<3 ; j++){
            for (k=0 ; k<2 ; k++){
                printf("%d ", s.a[i][j][k]);
                if (k==1){
                    printf("\n");
                }
            }
        }
    printf("\n");
    }

printf("\n");
    
int var = s.a[1][1][1];
printf("var(a[2][2][2]) = %d", var);
    
}
