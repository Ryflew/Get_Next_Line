# Projet Get_Next_line for 42

Ce projet a pour but de créer une fonction qui lit sur l'entré standard et où une fin de ligne est délimiter par un `\n` ou un `\0`.

# Compilation

Inclure `get_next_line.h` et `get_next_line.c` a votre projet puis compiler le.

# Usage

Exemple:
```
#include <stdlib.h>
#include <string.h>
#include "get_next_line.h"

int main(void)
{
  char  *str;
  
  while (get_next_line(0, &str))
  {
    if (!strcmp(str, "FIN")
     {
      free(str);
      break ;
     }
    free(str);
  }
  return (0);
}
```
