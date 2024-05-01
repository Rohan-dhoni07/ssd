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
  for(int  j=0;j<c;j++)    {
  printf(" %d",a[i][j]);}
  printf("\n");
    }
  int minr =0, maxr =r-1, minc = 0, maxc= c-1 ,tne= r*c ,count =0;
  while(count < tne){
  for(int  j =minc;j<=maxc;j++){
  printf("%d ",a[minr][j]);}
  if(count>=tne)
  break;
  minr++;
  count++;
  for( int i=minr;i<=maxr;i++){
  printf("%d ",a[i][maxc]); 
    }
  maxc--;
  count++;
  if(count>=tne)
  break;
  for( int j=maxc;j>=minc;j--){
  printf("%d ",a[maxr][j] );
    }
  maxr--;
  count++;
  if(count>=tne)
  break;
  for( int i=maxr;i>=minr;i--){
  printf("%d ",a[i][minc]);
    }
  minc++;
  count++;
  if(count>=tne)
  break; 
  printf("\n");
    }
    }