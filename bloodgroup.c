#include <stdio.h>
#include <string.h>
void main()
{ char Name[50], G[5], Answer[10];
  int i;
  do
  {
    printf("What is your Name? ");
    scanf("%s", Name);
    do
    {
      printf("What is your blood group [A, B, AB, or O]? ");
      scanf("%s", G);

      if (strcmp(G, "A") !=0  &&
                            strcmp(G, "B") !=0  &&
                            strcmp(G, "AB") !=0   &&
                            strcmp(G, "O") !=0 )
        printf("Blood group %s is incorrect! Please try again.\n", G);
    }  while (strcmp(G, "A") !=0  &&
                            strcmp(G, "B") !=0  &&
                            strcmp(G, "AB") !=0   &&
                            strcmp(G, "O") !=0 );
    if (strcmp(G,"A") ==0)
    {
      printf("%s, A. You can give blood to: A, AB.\n", Name);
      printf("  You can receive blood from: A, O.\n");
    }
    else if (strcmp(G, "B") ==0)
    {
      printf("%s, B. You can give blood to: B, AB.\n", Name);
      printf("  You can receive blood from: B, O.\n");
    }
    else if (strcmp(G, "AB") == 0)
    {
      printf("%s, AB. You can give blood only to: AB.\n", Name);
      printf("  Wow, you can receive blood from all: O, A, B, AB.\n");
    }
    else
    {
      printf("%s, O. You can give blood to all: O, A, B, AB\n", Name);
      printf("  But Sad! You can receive blood only from: O\n");
    }
    printf("\nContinue (YES for Yes)? ");
    scanf("%s", Answer);
  } while (strcmp(Answer, "YES") == 0);
  printf("Goodbye\n");
}
