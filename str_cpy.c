#include <stdio.h>
int main()
{

	char s1[] = "yash_yashuuu", s2[100], i;

	printf("string s1 : %s\n", s1);

	for (i = 0; s1[i] != '\0'; ++i)
  {
		s2[i] = s1[i];
	}

	s2[i] = '\0';


	printf("String s2 : %s", s2);

	return 0;
}
#if 0
string s1 : yash_yashuuu
String s2 : yash_yashuuu
#endif // 0
