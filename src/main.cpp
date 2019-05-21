#include <iostream>
#include <chrono>
#include <string>

int main() {
  using namespace std::chrono;

  // Pega o horário do sistema antes da execução do código
  high_resolution_clock::time_point t1 = high_resolution_clock::now();

  // Código que você quer medir o tempo
  for (int i = 0; i < 1000000; i++) {
      std::string queen = "Elsa";
  }

  // Pega o horário do sistema depois da execução do código
  high_resolution_clock::time_point t2 = high_resolution_clock::now();

  // Subtrai o horário de fim do horário de início
  duration<double, std::micro> elapsed_time = 
    duration_cast<duration<double>>(t2 - t1);

  std::cout << "Tempo de execução: " << (int) elapsed_time.count() 
            << "μs" << std::endl;

  return 0;
}