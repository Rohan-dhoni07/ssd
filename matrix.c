        #include<stdio.h>
        int main(){
        int r,c; 
    printf("Enter no of rows and column");
    scanf("%d %d",&r,&c);
    printf("Enter the elements of first matrix");
    int a[r][c],b[r][c];
    for( int i=0;i<r;i++){
    for(int j=0;j<c;j++){
    scanf("%d",&a[i][j]);
            }
            }
    printf("\n");
    printf("Enter the elements of second matrix");
    for( int i=0;i<r;i++){
    for(int j=0;j<c;j++){
    scanf("%d",&b[i][j]);
            }
            } 
    for( int i=0;i<r;i++){
            int p;
    for(int j=0;j<c;j++){
    p=a[i][j]+b[i][j];
    printf("%d ",p);
    }printf("\n");
            }
    return 0;
            }