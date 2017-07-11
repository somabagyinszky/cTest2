#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{

    /************lecture 10*************/
    /*int var = 45;
    printf("var = %d \n", var);
    printf("var = %o \n", var);
    printf("war = %x \n", var);

    int var2 = 056;
    printf("var2 = %d \n", var2);
    printf("var2 = %o \n", var2);
    printf("war2 = %x \n", var2);

    int var3 = 0xa;
    printf("var3 = %d \n", var3);
    printf("var3 = %o \n", var3);
    printf("war3 = %x \n", var3);*/

    // char ch = 'A';
    /*printf("Character is %c \n", ch);
    printf("Enter a character: ");
    char another;
    //scanf("%c", &another);
    another = getchar();
    printf("You have typed: %c \n", another);*/

    /*char ch = 'A';
    printf("%d - %c \n", ch, ch);
    int i = 65;
    for ( i = 65; i<91;i++)
        printf("%d - %c \n", i, i);*/
    /****************lecture 11********************/
//    char ch;
//    int i, j;
//    printf("Enter an integer: ");
//    scanf("%d", &i);
//    printf("Enter a character: ");
//    scanf(" %c", &ch);    /***at this line solving
    /* flushing problem***/
//    printf("Enter another integer: ");
//    scanf("%d", &j);
    /****************lecture 12********************/
    // problem int/int is int not float--> problem
//    int a,b;
//    a=5;
//    b=2;
//
//    float ratio = (float)a/b;
//    printf("ratio is = %f", ratio);
//
    /*******lecute 13*********/
//    int i;
//    i=printf("Hello\n");
//    printf("%d \n", i);

//    printf("%d\n", printf("Angel")!=printf("Daemon"));
//    printf("\"Hello\"");

    /*******lecture 28*******/
//    int age;
//    printf("Enter your age: ");
//    scanf("%d", &age);
//    age>=13 && age<=19?printf("Yes, teenage"):printf("No not teenage");

    /******lecture 29*******/
//    int year;
//    printf("Enter year: ");
//    scanf("%d", &year);
//    if (year%4==0){
//        if (year%100==0){
//            if (year%400==0) printf("Yes, the year is a leap year\n");
//            else printf("No the year is not a leap year\n");
//        }
//        else printf("Yes, the year is leap year\n");
//    }
//    else printf("No this is not a leap year\n");

//    int year;
//    printf("Enter year: ");
//    scanf("%d", &year);
//    if (year%4==0 && year%100!=0 || year%400==0)
//        printf("Yes, %d is a leap year\n", year);
//    else printf("No, %d is not a leap year\n", year);
//    int year;
//    printf("Enter year: ");
//    scanf("%d", &year);
//    (year%4==0 && year%100!=0) || year%400==0?printf("Yes %d is a leap year\n", year):printf("No %d is not a leap year", year);

    /******lecture 30*******/
//    int i=1;
//    while(i<=10)
//    {
//        printf("Hello World\n");
//        i++;
//    }


    /******lecture 31*******/
//    int n, sum, i;
//    printf("Enter n: ");
//    scanf("%d", &n);
//
//    sum=0;
//    i=1;
//    while(i<=n)
//    {
//        sum+=i++;
//    }
//    printf("Sum of first %d natural numbers = %d\n", n, sum);


    /******lecture 32*******/
//    int number, sum;
//    sum=0;
//
//    printf("Enter a positive number, negative to terminate: ");
//    scanf("%d", &number);
//
//    while(number>=0)
//    {
//        sum+=number;
//        printf("Enter a positive number, negative to terminate: ");
//        scanf("%d", &number);
//
//    }
//
//    printf("Sum of the numbers: %d\n",sum);


    /******lecture 34*******/
//    int n, sum, i;
//
//    printf("Enter n: ");
//    scanf("%d", &n);
//
//    for(sum=0, i=1; i<=n;sum+=i, i++);
//
//    printf("Sum of first %d natural numbers is %d\n", n, sum);
//
    /******lecture 36*******/

//    int count;
//    char response;
//
//    for(count=1;count<=100;count++){
//        printf("Count = %d\n", count);
//        printf("print next? enter Y/y to continue any other key to terminate ");
//        scanf("%c", &response);
//        if ((response!='Y') && (response !='y')){
//            break;
//        }
//    }
//    printf("Terminated at count=%d", count);


    /******lecture 37*******/

//    int count;
////    char response;
//
//    for(count=1;count<=100;count++){
////        printf("print next? enter Y/y to continue any other key to terminate ");
////        scanf("%c", &response);
//        if (count%2==0)
//            continue;
//
//        printf("Count = %d\n", count);
//
//
//
//    }
//    printf("Terminated at count=%d", count);


    /******lecture 38*******/
//    int k, i;
//    long t=time(NULL);
//
//    srand(t);
//    for(i=1;i<=10;i++){
//        k=rand();
//        printf("%d\n", k);
//    }


    /******lecture 39*******/
//    int x[100],i;
//    for(i=0;i<100;i++){
//        x[i]=i+1;
//    }
//    printf("Content of the array: ");
//    for(i=0;i<100;i++){
//        printf("%d,",x[i]);
//    }
    /******lecture 40*******/
//    int x[3]={1,2}, i;
//
//    for(i=0;i<3;i++){
//        printf("%d,",x[i]);
//    }
    /******lecture 41*******/
//    int x[10];
//    int n;
//    printf("Enter size of array: ");
//    scanf("%d", &n);
//
//    int x[n];
//    int i;
//
//    for(i=0; i<n; i++){
//        printf("Enter element to index %d: ", i);
//        scanf("%d", &x[i]);
//    }
//
//    printf("Content of array: \n");
//    for(i=0;i<n;i++){
//        printf("x[%d] = %d\n", i, x[i]);
//    }
    /******lecture 42*******/
//    int n;
//    printf("Enter number of elements: ");
//    scanf("%d", &n);
//    // declare the array
//    int x[n];
//    int i;
//
//    srand(time(NULL));
//    for(i=0;i<n;i++){
//        x[i]=rand()%100;
//    }
//    printf("Content of array: \n");
//    int sum = 0;
//    for (i=0;i<n;i++){
//        printf("%4d",x[i]);
//        sum+=x[i];
//    }
//    printf("\n\nSum is %d\n", sum);
//    double avg = (double)sum/n;
//    printf("Average of the numbers is %lf.", avg);

//    int x[4][3];
//    int i, j;
//
//    for(i=0;i<4;i++){
//        for(j=0;j<3;j++){
//            x[i][j]=i*j;
//        }
//    }
//    printf("Content of the 2D array: \n");
//    for(i=0;i<4;i++){
//        for(j=0;j<3;j++){
//            printf("%4d", x[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n");


    /******lecture 44*******/
//    int salesPerson, items;
//
//    printf("Enter number of salesperson: ");
//    scanf("%d", &salesPerson);
//    printf("Enter number of items: ");
//    scanf("%d", &items);
//    printf("\n\n\n");
//
//    // declare 2d array;
//    double saleData[salesPerson][items];
//
//    int i, j;
//    //input saledata into the array;
//    for(i=0;i<salesPerson;i++){
//        for(j=0;j<items;j++){
//            printf("Sale amount for salesperson %d item number %d: ", i+1, j+1);
//            scanf("%lf", &saleData[i][j]);
//        }
//    }
//    //display report
//    printf("----------------------------\n");
//    printf("Sale data\n");
//    printf("----------------------------\n");
//    double total=0.0;
//
//    for(i=0; i<salesPerson;i++){
//        printf("Sale data for salesperson %d\n", i+1);
//        printf("----------------------------\n");
//        total=0.0;
//        for(j=0;j<items;j++){
//            printf("\tItem %d:   $%0.2lf\n", j+1, saleData[i][j]);
//            total+=saleData[i][j];
//        }
//        printf("\tTotal :   $%0.2lf\n", total);
//        printf("\n\n");
//    }
//
    /******lecture 46*******/
//    char str[80];
//    printf("Enter you name: ");
////    scanf("%[A-Za-z ]", str);
//    scanf("%[^\n]", str);
//
//    printf("Welcome %s !\n", str);

    /******lecture 47*******/
//    char str[80];
//    printf("Enter a string: ");
//    scanf("%[^\n]", str);
//
//    int i;
////    for(i=0;str[i]!='\0';i++);
//    i=strlen(str);
//    printf("The length of the string is: %d.\n",i);
    /******lecture 48*******/

//    char str[80];
//    printf("Enter a strin: ");
//    scanf("%[^\n]", str);
//
//    int i, countAlpha=0, countSpace=0;
//
//    for(i=0;str[i]!='\0';i++){
//        if ((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
//            countAlpha++;
//        else if(str[i]==' ')
//            countSpace++;
//    }
//    printf("Total alpabethic character found: %d\n", countAlpha);
//    printf("Total spaces characters found: %d\n", countSpace);

    /******lecture 49*******/

//    char first[80]="Chocolate";
//    char second[80];
//
//
//    int i;
//    i=strcmp("abc", "xyz");
////    strcpy(second, first);
////    printf("Copied string %s", second);
////    strcat(first, " ");
////    strcat(first, second);
////    printf("The first array contains %s\n", first);



    return EXIT_SUCCESS;
}
