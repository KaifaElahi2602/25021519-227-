/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N;
    int i;
    float Student_Hourly_Rate;
    float Total_Monthly_Income=0.0f;
    int low_fee_students=0;
    printf("Enter the number of students : ");
    scanf("%d",&N);
    for( i=1;i<=N;i++)
    {
        printf("Student %d hourly charged rate is ",i);
        scanf("%f",&Student_Hourly_Rate);

    
    float Monthly_fee=30*Student_Hourly_Rate;
    Total_Monthly_Income+= Monthly_fee;
    if(Student_Hourly_Rate<=500)
    {
        printf("Low fee students\n");
        low_fee_students++;
    }
    else
    {
        printf("Regular fee students\n");
    }
}
    printf("Total Monthly income is: %.2f\n",Total_Monthly_Income);
    printf("Low fee students: %d\n  ",low_fee_students);
    return 0;
}