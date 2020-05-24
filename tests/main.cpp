#include "UnitTest++/UnitTest++.h"

int a = 0;
int b = 0;

TEST(Sanity) 
{
   CHECK_EQUAL(1, 1);
   CHECK_EQUAL(2, 2);
}

TEST(Sanity2){

   //printf("input a: ");
   //scanf("%d", &a);
   //printf("input b: ");
   //scanf("%d", &b);
   CHECK_EQUAL(a, b);
}
int main(int, const char *[])
{
   return UnitTest::RunAllTests();
}
