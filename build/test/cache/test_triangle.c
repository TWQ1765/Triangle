#include "build/temp/_test_triangle.c"
#include "triangle.h"
#include "unity.h"


void setUp(void)

{

}

void tearDown(void)

{

}



void test_sortSidesOfTriangle(void){

  int s1 = -1, s2 = -1, l = -1;



  char* result = sortSidesOfTriangle(5, 3, 1, &s1, &s2, &l);



  printf("short1 %d\n", s1);

  printf("short2 %d\n", s2);

  printf("long %d\n", l);



  UnityAssertEqualNumber((UNITY_INT)((5)), (UNITY_INT)((l)), (

 ((void *)0)

 ), (UNITY_UINT)(20), UNITY_DISPLAY_STYLE_INT);

}
