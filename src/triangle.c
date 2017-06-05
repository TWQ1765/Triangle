#include <stdio.h>
#include "triangle.h"

/**
 * aort this sided of triangle into short

*/
char *sortSidesOfTriangle(int v1, int v2, int v3 ,int *s1,int *s2,int *l){
  
if (v3>v2&&v3>v1){
*l = v3;
*s1 = v1;
*s2 = v2;  
//printf("valid %s\n",result);
}
else if (v2>v1 && v2>v3){
*l = v2;
*s1 = v1;
*s2 = v3;   
//printf("valid %s\n",result);
}
else if(v1>v2&&v1>v3){
*l = v1;
*s1 = v2;
*s2 = v3;   
//printf("valid %s\n",result);
}
else{
  return"invalid";
}
}



char *validTriangle(int a,int b,int c){
  int s1, s2, l;
  
  if (a+b >c){
    return "valid";
  }
  else {
    return "invalid";
  }
}
  
char *getTriangleType(int a,int b,int c){
int s1,s2, l;

if (a*a +b*b >c*c){
//printf  ("obtuse triangle");
}
else if (a*a +b*b == c*c){
  //printf  ("obtuse triangle");
}
else if (a*a +b*b < c*c){
  //printf  ("accute triangle");
}

else{
 // printf  ("isoclese triangle");
}
}
  







