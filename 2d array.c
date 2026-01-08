/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//printing 2D array

#include <stdio.h>

int main()
{
    int i,j,n,m;
    printf("Enter rows and columns:\n");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    /*for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }*/
    
    /*//printing first row input from user
        for(j=0;j<m;j++){
            printf("%d ",arr[0][j]);
            }
          printf("\n");
        
        //printng first column from user
        for(i=0; i<m;i++){
            printf("%d\n",arr[i][0]);
        }
        
        
        
        //printing diagonal of elements
        printf("\n");
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(i==j){
                    printf("%d\n",arr[i][j]);
                }
                
            }
        } 
        
        //printing sum of array elements
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        int sum=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                sum = sum + arr[i][j];
            }
        }
        printf("%d",sum);
        
        
        ///////--------same should be followed for printing sum of 1st row and column and also diagonal elements --------///
        
        ////printing largest element in the 2D array///
        int max;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%d",&arr[i][j]);
            }
        }
    
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                max = arr[0][0];
                if(arr[i][j]>max){
                    max = arr[i][j];
                }
            }
        }
        printf("Largest element in the array is: %d",max);
        */
        
        
}
    