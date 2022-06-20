#include <stdio.h>
int main(){

int m,n;
int i,j;
int matrix1[10][10],matrix2[10][10];


printf("enter desired number of rows and columns: ");
scanf("%d %d", &m, &n);

printf("enter the elements: \n");
  for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
         printf("enter element a%d%d: ", i+1, j+1);
         scanf("%d", &matrix1[i][j]);
      }
  }

printf("your entered matrix: \n");
   for(i = 0; i < m; i++){
       for(j = 0; j < n; j++){
           printf("%d\t", matrix1[i][j]);
           if(j==n-1){
               printf("\n");
           }
       }
   }


printf("transpose of the matrix is: \n");
for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
        printf("%d\t", matrix1[j][i]);
        if(j==n-1){
            printf("\n");
        }

    }
}

}
