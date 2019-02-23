#include<stdio.h>
int solve(int A[9][9]);
int main()
{

   int A[9][9];
   int i,j;
 
   printf("Enter the sudoku, 0 for empty cells\n");
   for(i=0;i<9;i++)
      for(j=0;j<9;j++)
        scanf("%d",&A[i][j]);
   
   j=solve(A);
   printf("following is the solved one");
   
   for(i=0;i<9;i++){ printf("\n");
      for(j=0;j<9;j++)
        printf("%d ",A[i][j]); }
        
   getch();
}               

int solve(int A[9][9])
{
     int i,j,k;
     int l,m,n,m1,n1;
     int x,placement;
     
     for(i=0;i<9;i++)
                      for(j=0;j<9;j++){
                                       if(A[i][j]) continue; //if it is not empty , move on
                                       for(k=1;k<=9;k++){
                                             //check if k can be placed in A[i][j] or not
                                             placement=1; x=0; //initially assume that k can be placed. further solution doesn't exist.
                                             for(l=0;l<9;l++) if(A[i][l]==k) placement=0; //if any value matches in the row, can't place 
                                             for(l=0;l<9;l++) if(A[l][j]==k) placement=0; //if any value matches in the column, can't place
                                             m=(i/3)*3; n=(j/3)*3;
                                             for(m1=m;m1<=m+2;m1++) for(n1=n;n1<=n+2;n1++) if(A[m1][n1]==k) placement=0;
                                             
                                             if(placement) { A[i][j]=k;  //if k can be placed in (i,j) place it
                                                             x= solve(A); //solve the next one
                                                           } 
                                             if(x==0) A[i][j]=0; //if the solution is not possible, put (i,j) back as empty
                                             if(x==1) break; //if it is solved, then no need to further check for next values of k
                                        } // end of k loop
                                       // if all the possibilities of k are exhausted
                                       if(x==0) return 0; //if it is not solvable return 0;
                                       
                                       }
                                                                          
                                             
                                                         
    return 1;                                                       
                                       
}
