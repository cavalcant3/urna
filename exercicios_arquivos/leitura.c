#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  FILE *file;
  file = fopen("texto.txt", "r");
  if (file == NULL)
  {

    printf("Opa! Ocorreu algum erro.");
    system("pause");
  }

  int numConta;
  char nome;
  float Saldo;

  fscanf(file, "%ls %s %f", &numConta, &nome, &Saldo);

  printf("%ls %s %f", &numConta, &nome, &Saldo);

  fclose(file);
  system("pause");

  return 0;
}
