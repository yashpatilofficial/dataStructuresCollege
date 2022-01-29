 #include<stdio.h>
 #include<conio.h>
 #include<malloc.h>
 #include<string.h>
 int main()
 {
 char *ma;

 //allocating memory space.
 ma = (char*) malloc(sizeof(char));
 ma="hello";
 printf("dynamically allocated value: %s\n",ma);
 //reallocating memory space.

 ma = (char*) realloc(ma,100*sizeof(char));
 strcat(ma,"kotambi,vadodara");
 printf("\n reallocated value: %s",ma);
 free(ma);
 getch();
 }
