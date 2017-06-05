#include "unity.h"
#include "triangle.h"

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

  TEST_ASSERT_EQUAL(5, l);
}
/*
void test_classifyLength_given_1_2_10_expect_invalid(void)
{
  
  
  TEST_ASSERT_EQUAL("valid " )
}

void test_getTriangle_expect_(void)
{
  char result;
  
  result = *getTriangleType
  
    TEST_ASSERT_EQUAL("valid",result);
    
}
*/