#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 0;
    do
    {
     do
    {
    n = get_int("How big should the pyramid be? ");
    }
    while(n < 1);
    }
    while(n > 8);


if(n == 8)
{
      printf("       #\n");
      printf("      ##\n");
      printf("     ###\n");
      printf("    ####\n");
      printf("   #####\n");
      printf("  ######\n");
      printf(" #######\n");
      printf("########\n");
}

if(n == 7)
{
      printf("       #\n");
      printf("      ##\n");
      printf("     ###\n");
      printf("    ####\n");
      printf("   #####\n");
      printf("  ######\n");
      printf(" #######\n");
}

if(n == 6)
{
      printf("       #\n");
      printf("      ##\n");
      printf("     ###\n");
      printf("    ####\n");
      printf("   #####\n");
      printf("  ######\n");
}
  if(n == 5)
{
      printf("       #\n");
      printf("      ##\n");
      printf("     ###\n");
      printf("    ####\n");
      printf("   #####\n");
}
  if(n == 4)
{
      printf("   #\n");
      printf("  ##\n");
      printf(" ###\n");
      printf("####\n");
}
  if(n == 3)
{
      printf("  #\n");
      printf(" ##\n");
      printf("###\n");
}
  if(n == 2)
{
      printf(" #\n");
      printf("##\n");
}
  if(n == 1)
{
      printf("#\n");
}
}
//run make mario
//./mario
