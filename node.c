#include<stdio.h>
#include<stdlib.h>

void print(int matrix[50][50],int n);
void init(int matrix[50][50],int n);
void input(int v[50],int n);

void main()
{
  int i,j,n,v[50],matrix[50][50],s,c=0,a,count;
  printf("Enter the number of nodes\n");
  scanf("%d",&n);
  input(v,n);
  init(matrix,n);
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
   {
     if(i<j)
     {
      s=1;
     }
     else
     {
      s=0;
     }
     matrix[i][j]=s;
   }
  }
  print(matrix,n);
  while(c==0)
  {
   count=0;
   printf("Enter the node whose relation you want to find\n");
   scanf("%d",&a);
   for(i=1;i<=n;i++)
   {
    if(matrix[a][i]==1)
      {
       printf("%d ",i);
       count++;
      }
   }
   if(count==0)
   {
    printf("Entered node is not related to any other node\n");
   }
   printf("\n");
   printf("Enter 0 to continue 1 to exit\n");
   scanf("%d",&c);
  }
}

void input(int v[50],int n)
{
 int i;
 printf("Enter the nodes:");
 for(i=1;i<=n;i++)
 {
  scanf("%d",&v[i]);
 }
}

void init(int matrix[50][50],int n)
{
 int i;
 for(i=0;i<=n;i++)
 {
   matrix[0][i]=0;
   matrix[i][0]=0;
 }
}

void print(int matrix[50][50],int n)
{
 int i,j;
 printf("The matrix obtained is\n");
 for(i=0;i<=n;i++)
 {
  for(j=0;j<=n;j++)
  {
   printf("%d ",matrix[i][j]); 
  }
  printf("\n");
 }
}
