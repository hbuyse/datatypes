#include <stdio.h>
#include <sys/types.h>


int main(void)
{
  printf("+------------------------+----+\n");
  printf("| char                   | %2lu |\n", sizeof(char));
  printf("+------------------------+----+\n");
  printf("| signed char            | %2lu |\n", sizeof(signed char));
  printf("+------------------------+----+\n");
  printf("| unsigned char          | %2lu |\n", sizeof(unsigned char));
  printf("+------------------------+----+\n");
  printf("| short                  | %2lu |\n", sizeof(short));
  printf("+------------------------+----+\n");
  printf("| signed short           | %2lu |\n", sizeof(signed short));
  printf("+------------------------+----+\n");
  printf("| signed short int       | %2lu |\n", sizeof(signed short int));
  printf("+------------------------+----+\n");
  printf("| unsigned short         | %2lu |\n", sizeof(unsigned short));
  printf("+------------------------+----+\n");
  printf("| unsigned short int     | %2lu |\n", sizeof(unsigned short int));
  printf("+------------------------+----+\n");
  printf("| int                    | %2lu |\n", sizeof(int));
  printf("+------------------------+----+\n");
  printf("| signed int             | %2lu |\n", sizeof(signed int));
  printf("+------------------------+----+\n");
  printf("| unsigned int           | %2lu |\n", sizeof(unsigned int));
  printf("+------------------------+----+\n");
  printf("| long                   | %2lu |\n", sizeof(long));
  printf("+------------------------+----+\n");
  printf("| signed long            | %2lu |\n", sizeof(signed long));
  printf("+------------------------+----+\n");
  printf("| signed long int        | %2lu |\n", sizeof(signed long int));
  printf("+------------------------+----+\n");
  printf("| unsigned long          | %2lu |\n", sizeof(unsigned long));
  printf("+------------------------+----+\n");
  printf("| unsigned long int      | %2lu |\n", sizeof(unsigned long int));
  printf("+------------------------+----+\n");
  printf("| long long              | %2lu |\n", sizeof(long long));
  printf("+------------------------+----+\n");
  printf("| long long int          | %2lu |\n", sizeof(long long int));
  printf("+------------------------+----+\n");
  printf("| signed long long       | %2lu |\n", sizeof(signed long long));
  printf("+------------------------+----+\n");
  printf("| signed long long int   | %2lu |\n", sizeof(signed long long int));
  printf("+------------------------+----+\n");
  printf("| unsigned long long     | %2lu |\n", sizeof(unsigned long long));
  printf("+------------------------+----+\n");
  printf("| unsigned long long int | %2lu |\n", sizeof(unsigned long long int));
  printf("+------------------------+----+\n");
  printf("| float                  | %2lu |\n", sizeof(float));
  printf("+------------------------+----+\n");
  printf("| double                 | %2lu |\n", sizeof(double));
  printf("+------------------------+----+\n");
  printf("| long double            | %2lu |\n", sizeof(long double));
  printf("+------------------------+----+\n");
  printf("| size_t                 | %2lu |\n", sizeof(size_t));
  printf("+------------------------+----+\n");
  printf("| ssize_t                | %2lu |\n", sizeof(ssize_t));
  printf("+------------------------+----+\n");
  printf("| pid_t                  | %2lu |\n", sizeof(pid_t));
  printf("+------------------------+----+\n");
  printf("| void*                  | %2lu |\n", sizeof(void*));
  printf("+------------------------+----+\n");

  return 0;
}
