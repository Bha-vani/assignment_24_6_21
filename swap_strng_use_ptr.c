/**Write a program to swap the string by using swapping pointer**/
#include<stdio.h>
void swap1(char **str1_ptr, char **str2_ptr)
{
  char *temp = *str1_ptr;
  *str1_ptr = *str2_ptr;
  *str2_ptr = temp;
}

int main()
{
  char *str1 = "bhavani";
  char *str2 = "naga";
  printf("before swapping\n");
  printf("%s ,%s\n", str1, str2);
  swap1(&str1, &str2);
  printf("after swapping\n");
  printf("%s ,%s", str1, str2);
  getchar();
  return 0;
}
#if 0
before swapping
bhavani,naga
after swapping
naga ,bhavani

#endif // 0
