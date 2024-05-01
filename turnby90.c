    #include<stdio.h>                           
    int main(){                                          
    int r,c;                            
    printf("Enter no of rows and column");
    scanf("%d %d",&r,&c);   
    printf("Enter the elements of first matrix");
    int a[r][c],b[r][c];    
    for( int i=0;i<r;i++)   {
    for(int j=0;j<c;j++)    {
    scanf("%d",&a[i][j]);
    b[j][i]= a[i][j];    
    }
    }
    printf("\n The Entered matrix is\n");
    for( int i=0;i<r;i++)   {
    for(int j=0;j<c;j++)    {
    printf(" %d",a[i][j]);
    b[j][i]=a[i][j];
    }
    printf("\n");
    }
for( int i=0;i<r;i++){ 
for(int j=0;j<c/2;j++){
int temp =b[i][j]; 
b[i][j]=b[i][r-j-1];
b[i][r-j-1] = temp;
}
}
for( int i=0;i<r;i++){
 for(int j=0;j<c;j++){
printf("%d ",b[i][j]);
}
    printf("\n");
}
}