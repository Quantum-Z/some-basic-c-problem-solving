//----Remainder of two integer------

#include <stdio.h>

int main() {
    int n1, n2, remainderNumber;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    
    remainderNumber = n1 % n2;
    
    printf("Remainder: %d\n", remainderNumber);
    return 0;
}

//-----celsius ot Fahrenheit-----


#include <stdio.h>
int main() {
float celsius, fahrenheit;

    printf("Enter temperature of celsius: ");
    scanf( "%f", &celsius);
     fahrenheit= (celsius* 9/5)+32;

printf("%f celsius is equal to %.2f fahrenheit",celsius,fahrenheit);
return 0;

}



//-----Square and cube of a Number-----

#include <stdio.h>

int main() {
    int  number,square,cube;


printf("Number: ");
    scanf("%d",&number);

    square= number*number;
    cube=number*number*number;

    printf("square number is %d\n cube number is %d ",square,cube);
    return 0;

}

//----Convert minute to hours,minute,second----


#include <stdio.h>
#include <math.h>

int main() {
    float min;

    printf("Enter the value of minutes: ");
    scanf("%f", &min);

    int hours = min / 60;
    int minutes = (int)min - hours * 60;

    printf("%d min are %d hours and %d minutes.\n", (int)min, hours, minutes);

    float seconds = (min - (int)min) * 60;

    printf("%d min are %.2f seconds.\n", (int)min, seconds);

return 0;
}