#include <time.h>
#include <stdio.h>

int main() {
	struct timespec start, end;

	// Pega o horário do sistema antes da execução do código
	clock_gettime(CLOCK_REALTIME, &start);

	// Código que você quer medir o tempo
	for (int i = 0; i < 1000000; i++) {
		char* queen = "Elsa";
	}

	// Pega o horário do sistema depois da execução do código
	clock_gettime(CLOCK_REALTIME, &end);

	// Subtrai o horário de fim do horário de início
	long elapsed_time = 1.e+6 * (double) (end.tv_sec - start.tv_sec)
						+ 1.e-3 * (double) (end.tv_nsec - start.tv_nsec);

	printf("Tempo de execução: %ldμs\n", elapsed_time);
}