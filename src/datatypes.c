#include <stdio.h>
#include <stdlib.h>   // calloc
#include <string.h>

#include <sys/ioctl.h>   // winsize, TIOCGWINSZ
#include <sys/types.h>   // types

#define SPACES_NB 24

#define HORIZONTAL()                                 \
  do                                                 \
  {                                                  \
    char* tmp = calloc(SPACES_NB + 1, sizeof(char)); \
    memset(tmp, '-', SPACES_NB);                     \
    printf("+-%s-+-----+\n", tmp);                   \
    free(tmp);                                       \
    tmp = NULL;                                      \
  } while (0)

#define SIZEOF(type)                                 \
  do                                                 \
  {                                                  \
    char* tmp = calloc(SPACES_NB + 1, sizeof(char)); \
    memset(tmp, ' ', SPACES_NB);                     \
    strncpy(tmp, #type, strlen(#type));              \
    printf("| %s | %3lu |\n", tmp, sizeof(type));    \
    free(tmp);                                       \
  } while (0)

int main(void)
{
#if 0
  struct winsize sz = {0};

  ioctl(0, TIOCGWINSZ, &sz);
  printf("Screen width: %hu  Screen height: %hu\n", sz.ws_col, sz.ws_row);
#endif
  HORIZONTAL();
  SIZEOF(char);
  HORIZONTAL();
  SIZEOF(signed char);
  HORIZONTAL();
  SIZEOF(unsigned char);
  HORIZONTAL();
  SIZEOF(short);
  HORIZONTAL();
  SIZEOF(signed short);
  HORIZONTAL();
  SIZEOF(signed short int);
  HORIZONTAL();
  SIZEOF(unsigned short);
  HORIZONTAL();
  SIZEOF(unsigned short int);
  HORIZONTAL();
  SIZEOF(int);
  HORIZONTAL();
  SIZEOF(signed int);
  HORIZONTAL();
  SIZEOF(unsigned int);
  HORIZONTAL();
  SIZEOF(long);
  HORIZONTAL();
  SIZEOF(signed long);
  HORIZONTAL();
  SIZEOF(signed long int);
  HORIZONTAL();
  SIZEOF(unsigned long);
  HORIZONTAL();
  SIZEOF(unsigned long int);
  HORIZONTAL();
  SIZEOF(long long);
  HORIZONTAL();
  SIZEOF(long long int);
  HORIZONTAL();
  SIZEOF(signed long long);
  HORIZONTAL();
  SIZEOF(signed long long int);
  HORIZONTAL();
  SIZEOF(unsigned long long);
  HORIZONTAL();
  SIZEOF(unsigned long long int);
  HORIZONTAL();
  SIZEOF(float);
  HORIZONTAL();
  SIZEOF(double);
  HORIZONTAL();
  SIZEOF(long double);
  HORIZONTAL();
  SIZEOF(size_t);
  HORIZONTAL();
  SIZEOF(ssize_t);
  HORIZONTAL();
  SIZEOF(time_t);
  HORIZONTAL();
  SIZEOF(pid_t);
  HORIZONTAL();
  SIZEOF(void*);
  HORIZONTAL();

  return 0;
}
