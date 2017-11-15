//String Abbriviation Using Array and For Loop. 

#include <stdio.h>
#include <string.h>

int main ()
{
  char str1[50][50], str[50];
  int i, j = 0, k = 0, l;

  printf ("Enter Any Person Name: ");
  gets (str);
  printf ("The String You Have Enter: %s \n", str);

  l = strlen (str);

  printf ("The length of (%s) is: %d \n", str, l);

  for (i = 0; str[i] != '\0'; i++)
    {
      if (str[i] != ' ')
	   {
          str1[j][k] = str[i];
          k++;
	   }
	   else
	   {
	     j++;
	     k = 0;
	   }
    }


  for (i=0; i <= j; i++)
    {
        if(i != j)
        {
          printf(" %c.", str1[i][0]);
        }
        else
        {
          printf(" %s", str1[i]); 
        }
    }

  return 0;

}
