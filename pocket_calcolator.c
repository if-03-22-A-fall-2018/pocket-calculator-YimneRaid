// Block header comment will come

#include <stdio.h>
void Print (){
  printf("Choose one of the following operations:\nAdd (1)\nSubtract (2)\nMultiply (3)\nDivide (4)\nStop program (-1)\nEnter your choice: ");
}

double Add(double firstNumber, double secondNumber){
  double solution;
  solution=firstNumber+secondNumber;
  return solution;
}

double Subtract(double firstNumber, double secondNumber){
  double solution;
  solution = firstNumber-secondNumber;
  return solution;




}

double Multiply(double firstNumber, double secondNumber){
  double solution;
  solution=firstNumber*secondNumber;
  return solution;



}

double Divide(double firstNumber, double secondNumber){
  double solution=firstNumber/secondNumber;
  return solution;
}

double EnterSecondNumber(){
  double secondNumber;
  printf("Please enter the second operand:" );
  scanf("%lf", &secondNumber);
  return secondNumber;
}

int Choice(double firstNumber,double secondNumber){
  int choise;
  switch(choise){
      case 1:Add(firstNumber,secondNumber);break;
      case 2:Subtract(firstNumber,secondNumber);break;
      case 3:Multiply(firstNumber,secondNumber);break;
      case 4:while(secondNumber==0){
        printf("Error! Please enter another number to divede: \n" );
        secondNumber=EnterSecondNumber();
        if (secondNumber!=0){
          Divide(firstNumber,secondNumber);break;
        }
      }
  }
}

double EnterFirstNumber(){
  double firstNumber;
  printf("Please enter the first operand:" );
  scanf("%lf", &firstNumber);
  return firstNumber;
}

 int main(int argc, char const *argv[]) {
   Print();
   double firstOperand=EnterFirstNumber();
   double secondOperand=EnterSecondNumber();
   double result=Choice(firstOperand,secondOperand);
   printf("Result=%lf",result );
  return 0;
}
