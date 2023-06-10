// 2. Write a program in C to input a string and print it.

// Test Data :
// Input the string : Welcome, w3resource
    #include<stdio.h>
    int main()
    {
    char str[50];
    printf("\naccept a string form keyboard \n");
    printf(".............hello...........\n");
    printf("input the string");
    fgets(str,sizeof str,stdin);
    printf("the string you enter is %s\n",str);
    return 0;
    }