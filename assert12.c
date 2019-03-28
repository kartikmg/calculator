#include"calci.h"
#include<assert.h>
int main()
{

assert_test();
}

void assert_test()
{
    assert(calcu('+',5,9)==14);
    assert(calcu('-',5,-9)==14);
    assert(calcu('*',5,9)==45);
    assert(calcu('/',-5,5)==-1);
  printf("working fine");
}
