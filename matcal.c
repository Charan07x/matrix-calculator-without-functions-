#include<stdio.h>
int a[10][100],i,j,n;
void main(){
int ch,i,j,m,n,p,q,k,s,r1,c1,a[10][10],b[10][10],c[10][10];
printf("          ");
printf("\n\t\t MENU");
printf("          ");
printf("\n[1] addition of two matrices");
printf("\n[2] multiplication of two matrices");
printf("\n[3] transpose of a square matrix");
printf("\n[4] subtraction of two matrices");
printf("\n[5] transpose of a m*n matrix");
printf("\n[0] EXIT");
printf("          ");
printf("\n\t Enter your choice: \n");
scanf("%d",&ch);
if(ch<=2 && ch>0){
printf("valid choice\n");}
switch(ch){
case 1:
printf("input rows and columns of a and b matrix\n");
scanf("%d%d",&r1,&c1);
printf("enter elements of matrix a\n");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++)
scanf("%d" ,&a[i][j]);}
printf("\n matrix a\n");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++){
printf("%d\t",a[i][j]);}
printf("\n");}
printf("enter elements of matrix b\n");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++)
scanf("%d",&b[i][j]);}
printf("\n matrix a\n");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++){
printf("%d\t",b[i][j]);}
printf("\n");}
printf("\n    MATRIX ADDITION    \n");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++)
printf("%5d",a[i][j]+b[i][j]);
printf("\n");}
break;
case 2:
printf("input rows and columns of a matrix\n");
scanf("%d %d",&m,&n);
printf("input rows and columns of b matrix\n");
scanf("%d %d",&p,&q);
if(n!=p){
printf("matrix cannot be multiplied\n");}
else{
printf("\n Enter elements of matrix a : \n");
for(i=0;i<m;i++){
for(j=0;j<n;j++){
scanf("%d",&a[i][j]);}}

printf("\n Enter elements of matrix b : \n");
for(i=0;i<p;i++){
for(j=0;j<q;j++){
scanf("%d",&b[i][j]);}}
printf("\n matrix a\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("%d\t",a[i][j]);}
printf("\n");}
printf("\n matrix b\n");
for(i=0;i<p;i++){
for(j=0;j<q;j++){
printf("%d\t",b[i][j]);}
printf("\n");}
printf("\n    MATRIX MULTIPLICATION    \n");
for(i=0;i<m;i++){
for(j=0;j<q;j++){
s=0;
for(k=0;k<n;k++){
s=s+a[i][k]*b[k][j];
c[i][j]=s;}}}
printf("\n the product of matrix: \n");
printf("\n resultant matrix: \n");
for(i=0;i<m;i++){
for(j=0;j<q;j++){
printf("%d\t",c[i][j]);}    
printf("\n");}
break;
case 3:
printf("enter the value of n");
scanf("%d",&n);
printf("enter matrix elements %d*%d\n",n,n);
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d",&a[i][j]);}}
printf("\n matrix a before transpose 0\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d\t",a[i][j]);}
printf("\n");}
printf("\n    TRANSPOSE OF MATRIX    \n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d\t",a[j][i]);}
printf("\n");}
break;
case 4:
printf("input rows and columns of a and b matrix\n");
scanf("%d%d",&r1,&c1);
printf("enter elements of matrix a\n");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++)
scanf("%d" ,&a[i][j]);}
printf("\n matrix a\n");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++){
printf("%d\t",a[i][j]);}
printf("\n");}
printf("enter elements of matrix b\n");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++)
scanf("%d",&b[i][j]);}
printf("\n matrix a\n");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++){
printf("%d\t",a[i][j]);}
printf("\n");}
printf("\n    MATRIX SUBTRACTION    \n");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++)
printf("%5d",a[i][j]-b[i][j]);
printf("\n");}
break;
case 5:
printf("\n enter rows and columns of the matrix \n");
scanf("%d%d",&m,&n);
printf("enter matrix elements %d*%d\n",m,n);
for(i=0;i<m;i++){
for(j=0;j<n;j++){
scanf("%d",&a[i][j]);}}
printf("\n matrix a before transpose \n");
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("%d\t",a[i][j]);}
printf("\n");}
printf("\n    TRANSPOSE OF MATRIX    \n");
for(i=0;i<n;i++){
for(j=0;j<m;j++){
printf("%d\t",a[j][i]);}
printf("\n");}
break;
case 0:
printf("\n choice terminated");
break;
default:
printf("\n invalid choice");}}}