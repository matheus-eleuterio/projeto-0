#include <stdio.h>

int main() {
  int opcao;
  do {
    printf("\nMenu Principal\n");
    printf("1 - Criar tarefa\n");
    printf("2 - Listar tarefas\n");
    printf("3 - Listar tarefas\n");
    printf("0 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("Opcao escolhida: %d\n", opcao);
  } while (opcao);
}