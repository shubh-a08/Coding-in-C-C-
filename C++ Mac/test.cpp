#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,b,c,d;
    // for(a=1;a<1000;a++){
    //     d = a;
    //     c = 0;
    //     for(;a>0;a =a/10){
    //         b = a%10;
    //         c = c+(b*b*b);
    //     }
    //     if(c==d) printf("%d\n",d);
    //     else continue;
    //     // break;
    //     // printf("%d",a);
    // }


    // int ar[4]={1,2,3,4};
    // printf("[");
    // for(a=0;a<9;a++){
    //     printf("%d",ar[a]);
    //     if(a!=s-1) printf(", ");
    //     else printf("]");
    // }

  scanf("%d",&a);
  switch(a){
  case 1:
      printf("Monday");
      break;
  case 2:
      printf("Tuesday");
      break;
  case 3:
      printf("Wednesday");
      break;
  case 4:
      printf("Thursday");
      break;
  case 5:
      printf("Friday");
      break;
  case 6:
      printf("Saturday");
      break;
  case 7:
      printf("Sunday");
      break;
  default:
      printf("Incorrect input");
      break;
  
  }
  return 0;




}
