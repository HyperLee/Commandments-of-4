#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 main(void)
{
	//char *s1 = "hello, ";
    char s1[20] = "Hello, ";
    char *s2 = "world!";
    /* �]�� strcat() ����^�ȵ���Ĥ@�ӰѼƭȡA�ҥH s3 �N���ݭn�F */
    strcat(s1, s2);
	printf("%s\n", s1);
    
	
    system("pause");
	return 0;
}
