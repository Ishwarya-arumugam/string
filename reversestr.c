   #include<stdio.h>
   #include<conio.h>
   #include<string.h>
   int main()
   {
   int i=0,j;
   char a[200],c;
   clrscr();
   scanf("%s",a);
   j=strlen(a)-1;
   while(i<j)
   {
   c=a[i];
   a[i]=a[j];
   a[j]=c;
   i++;
   j--;
   }
   printf("\nReverse string is:%s",a);
   getch();
   return 0;
   }
