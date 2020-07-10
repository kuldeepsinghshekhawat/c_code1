# include < stdio .h >
# include < stdlib .h >
double scalar(int len , double * arr1 , double * arr2 );
int main () 
{
int len;
printf (" Enter an array length : ");
scanf ("%d", & len ); 
double *v1 = malloc(len * sizeof ( double ));
double *v2 = malloc(len * sizeof ( double ));
double res;
for (int i = 0; i < len ; ++ i ) {
v1 [i] = i;
v2 [i] = 2.0 * i ;
}
res = scalar( len , v1 , v2 );
printf (" The scalar product is %.4 f\n", res );
free ( v1 );
free ( v2 );
}
double scalar(int len , double * arr1 , double * arr2 ) {
double res = 0.0;
for (int i = 0; i < len ; ++ i ) {
res += arr1[i]* arr2[i];
}
return res ;
}