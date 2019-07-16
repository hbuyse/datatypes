#include "config.h"

#include <stdio.h>
#include <stdlib.h>   // calloc
#include <string.h>

#include <sys/ioctl.h>   // winsize, TIOCGWINSZ
#include <sys/types.h>   // types

#define DATATYPES(type)            \
  {                                \
    .s = #type, .sz = sizeof(type) \
  }

#define NELEMS(array) (sizeof((array)) / sizeof((array)[0]))

struct datatypes_s {
  char* s;
  size_t sz;
};

static size_t get_max_size(struct datatypes_s* p);
static char* create_horizontal_line(size_t max_length);
static void print_types(struct datatypes_s* p);

int main(void)
{
  struct datatypes_s types[] = {
    DATATYPES(char),
    DATATYPES(signed char),
    DATATYPES(unsigned char),
    DATATYPES(short),
    DATATYPES(signed short),
    DATATYPES(signed short int),
    DATATYPES(unsigned short),
    DATATYPES(unsigned short int),
    DATATYPES(int),
    DATATYPES(signed int),
    DATATYPES(unsigned int),
    DATATYPES(long),
    DATATYPES(signed long),
    DATATYPES(signed long int),
    DATATYPES(unsigned long),
    DATATYPES(unsigned long int),
    DATATYPES(long long),
    DATATYPES(long long int),
    DATATYPES(signed long long),
    DATATYPES(signed long long int),
    DATATYPES(unsigned long long),
    DATATYPES(unsigned long long int),
    DATATYPES(float),
    DATATYPES(double),
    DATATYPES(long double),
    DATATYPES(size_t),
    DATATYPES(ssize_t),
    DATATYPES(time_t),
    DATATYPES(pid_t),
    DATATYPES(void*),
    {0, 0},
  };

  print_types(types);
  return 0;
}

static size_t get_max_size(struct datatypes_s* p)
{
  size_t ret = 0;

  for (; p->s; p++)
  {
    if (ret < strlen(p->s))
    {
      ret = strlen(p->s);
    }
  }

  return ret;
}

static char* create_horizontal_line(size_t max_length)
{
  char* ret = NULL;
  char* tmp = NULL;

  tmp = calloc(max_length + 1, sizeof(*tmp));
  memset(tmp, '-', max_length);
  asprintf(&ret, "+-%s-+-----+", tmp);
  free(tmp);

  return ret;
}

static void print_types(struct datatypes_s* p)
{
  size_t max_length = 0;
  char* horizontal_line = NULL;

  // Get the maximal length of string
  max_length = get_max_size(p);

  // Create the horizontal line
  horizontal_line = create_horizontal_line(max_length);

  for (; p->s; p++)
  {
    char* tmp = NULL;

    tmp = calloc(max_length + 1, sizeof(char));
    memset(tmp, ' ', max_length);
    strncpy(tmp, p->s, strlen(p->s));
    printf("%s\n", horizontal_line);
    printf("| %s | %3zu |\n", tmp, p->sz);
    free(tmp);
  }
  printf("%s\n", horizontal_line);

  free(horizontal_line);
}
