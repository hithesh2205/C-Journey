#include <stdio.h>
float perimeter(float ra);  //function declaration or prototype   //formal argument is used in prototype
float area(float ra);  //function declaration or prototype
void main(){
   int r;
   scanf("%d",&r);
   printf("%f\n%f",perimeter(r),area(r));   //function call    //r is the actual argument
}
float area(float ra){      //function definition        //ra is the formal argument
   float a;
   a=3.14*ra*ra;
   return a;
}
float perimeter(float ra){    //function definition
   float p;
   p=2*3.14*ra;
   return p;
}
