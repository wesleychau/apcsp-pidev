#include <stdio.h>
#include <strings.h>


int check_anagram(char x[], char y[])
{
  int first[26] = {0}; int second[26] = {0}; int c = 0;
 
  // Calculating frequency of characters of first string
 
  while (x[c] != '\0')
  {
    first[x[c]-'a']++;
    c++;
   }
c = 0;
  while (y[c] != '\0')
  {
	second[y[c]-'a']++;
	c++;
  }

  c = 0;
 
  // Comparing frequency of characters
for (c = 0; c < 26; c++)
 {
    if (first[c] != second[c])
      return 0;
  }
return 1;
}

 
int main(int argc, char* argv[])
{
  char x[256];
  int found1 = sscanf(argv[1], "%s", &x);

  char y[256];
  int found2 = sscanf(argv[2], "%s", &y);

  if (check_anagram(x, y) == 1)
    printf("The words are anagrams.\n");
  else
    printf("The words aren't anagrams.\n");
  return 0;
}

