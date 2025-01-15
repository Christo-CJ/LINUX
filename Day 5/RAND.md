# Rand and Srand

## header 
```bash 
#include<stdlib.h>
```
## syntax
```bash
int rand(void);
void srand(unsigned ind seed);
```

rand will generate random number between 0 to RAND_MAX.

Srand function is to provide a seed to rand function so that rand will generate a new sequence and random number.
If srand is not used the rand function will automatically seeded with '1'.

stdlib.h
--------
#define RAND_MAX 2147483647  
#define EXIT_FAILURE 1  
#define EXIT_SUCCESS 0  


