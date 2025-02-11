//------Remainder of two integer--------

#include <stdio.h>

int main() {
    int n1, n2, remainderNumber;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    
    remainderNumber = n1 % n2;
    
    printf("Remainder: %d\n", remainderNumber);
    return 0;
}

//------celsius ot Fahrenheit--------


#include <stdio.h>
int main() {
float celsius, fahrenheit;

    printf("Enter temperature of celsius: ");
    scanf( "%f", &celsius);
     fahrenheit= (celsius* 9/5)+32;

printf("%f celsius is equal to %.2f fahrenheit",celsius,fahrenheit);
return 0;

}



//------Square and cube of a Number-------

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

//------Convert minute to hours,minute,second--------

#include <stdio.h>
#include <math.h>

int main() {
    float min;

    printf("Enter the value of minutes: ");
    scanf("%f", &min);

    int hours = min / 60;
    int minutes = (int)min - hours * 60;

    float seconds = (min - (int)min) * 60;


    printf("%.2f min are %d hours, %d minutes, and %.2f seconds\n", min, hours, minutes, seconds);

    return 0;
}

//-------Become messi with if else--------

#include<stdio.h>
#include<math.h>

int main (){
int x, y;
printf ("Enter number: ");
 scanf("%d %d",&x , &y);
     
if (x*y == 10)
    printf("you are messi :>>>> ");

else if (x*y <10 )
    printf(" You are in the team 10  :> ");

else printf ("You are not in the team :<");

 return 0;
}









//-------FIND vowel or consonant--------
#include<stdio.h>
int main (){

 char letter ;

 printf ("Enter a letter: ");
 scanf("%c", &letter);

 if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
        letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    printf(" vowel");

else printf ("consonant");
 return 0;
 }

//--------Write a c programme to find the largest of three numbers--------

#include <stdio.h>

int main() {
    int n1, n2, n3;
    

    printf("enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    int largest = n1;
    
    if (n2 > largest) {
        largest = n2;
    }
    
    if (n3 > largest) {
        largest = n3;
    }
    
     printf("the largest number is: %d\n", largest);
    
    return 0;
}


//-------Write a c programme to find the smallest of three numbers-------

#include <stdio.h>

int main() {
    int n1, n2, n3;
    
      printf("enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3); 
    
    int smallest = n1;
    
    if (n2 < smallest) {
        smallest = n2;
    }
    
    if (n3 < smallest) {
        smallest = n3;
    }
    
    printf("the smallest number is: %d\n", smallest);
    
    return 0;
}

//------Write a c programme to check if a number is even or odd-------

#include <stdio.h>

int main() {
    int n; 
    
    printf("Enter a number: ");
    scanf("%d", &n); 
    
    if (n % 2 == 0) {
        
        printf("The number %d is even.\n", n);
    } else {
        
        printf("The number %d is odd.\n", n);
    }
    
    return 0;
}




