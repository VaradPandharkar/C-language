#include<stdio.h>
#include<math.h>
int main(){
  double principal = 0.0;
  double rate = 0.0;
  int year = 0;
  int timescompounded = 0;
  double total = 0.0;

  printf("compound intrest calculator\n");
  printf("Enter the pricipal (P): ");
  scanf("%lf", &principal);

  printf("Enter the intrest rate % *(r): ");
  scanf("%lf",&rate);
  rate = rate / 100;

  printf("Enter the # of years (t): ");
  scanf("%d", &year);

  printf("Enter the # of times compounded per year (n): ");
  scanf("%d",&timescompounded);

  total = principal * pow(1+ rate / timescompounded , timescompounded* year);

  printf("After %d years , the total will be $%.2lf", year , total);
  return 0 ;

}


//compound intrest calculator
//Enter the pricipal (P): 1000
//Enter the intrest rate (r): 10
//Enter the # of years (t): 2
//Enter the # of times compounded per year (n): 1
// After 2 years , the total will be $1210.00
