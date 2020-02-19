#include <stdio.h>
int main(){
  int k=0,temp, a[16], arr_rows, arr_columns, i, j;

  printf("Enter the size of 2D array with rows and columns\n");
  scanf("%d %d", &arr_rows, &arr_columns);

  int arr[arr_rows][arr_columns];

  printf("Enter the array\n");
  for( i =  0 ; i < arr_rows ; i++){
    for(j = 0 ; j < arr_columns ; j++){
      scanf("%d", &arr[i][j]);
    }
  }

  for(i = 0, j = 0 ; i < arr_rows-2 ; i++ , j++){

   // for(j = 1 ; j < arr_columns-2 ; j++){
      a[k] = arr[i][j] + arr[i][j + 1] +
        arr[i][j + 2] + arr[i + 1][j + 1] +
        arr[i + 2][j] + arr[i + 2][j + 1] +
        arr[i + 2][j + 2] ;

      k++;
//    }


  }


  for(i = 0 ; i <= k-1 ; i++){
    for(j = i+1 ; j <=k ; j++){
      if (a[i] < a[j]){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
      else{
        continue;
      }
    }
  }

    printf("%d\n", a[0]);

  return 0;
}
