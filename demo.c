#include <stdio.h>
#include <string.h>

//demo strchr and strstr

/*
  char *strchr(const char *s, int c);

  The strchr() function returns a pointer to the first occurrence of the character c in the string s.
  The strchr() function returns a pointer to the matched character or NULL if the character is
    not found. The terminating null byte is considered part of the string, so that if c is
    specified as '\0', this function returns a pointer to the terminator.
 */
void demoStrchr() {
  char s[] = "hello world!";
  
  char *c = strchr(s, 'e'); //c points to e
  printf("*c: %c\tstring: %s\n", *c, c); //show the character c points to and string starting from e
  
  c = strchr(s, 'o'); //c points to first o
  printf("*c: %c\tstring: %s\n", *c, c); //show the character c points to and string starting from o

  c = strchr(s, '\0'); //c points to terminator
  c--; //go 1 char back
  printf("*c: %c\tstring: %s\n", *c, c); //show the character c points to and string starting from !

  c = strchr(s, 't'); //c is NULL since there is no character 't' in s
  printf("c: %p\n", c); //show c is null
}

/*
  char *strstr(const char *haystack, const char *needle);

  The strstr() function finds the first occurrence of the substring needle in the string haystack.
    The terminating null bytes ('\0') are not compared.
  This function returns a pointer to the beginning of the located substring, or NULL if the
    substring is not found.
 */
void demoStrstr() {
  char s[] = "lorem ipsum dolor";

  char *c = strstr(s, "ip"); //c points to beginning of "ip" in s
  printf("*c: %c\tstring: %s\n", *c, c); //show the character c points to and string starting from ip
  
  c = strstr(s, "lor"); //c points to beginning of first "lor" in s
  printf("*c: %c\tstring: %s\n", *c, c); //show the character c points to and string starting from lor

  c = strstr(s, "hark"); //c is NULL since there is no substring "hark" in s
  printf("c: %p\n", c); //show c is null
}

int main() {
  demoStrchr();
  demoStrstr();
  return 0;
}
