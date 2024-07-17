#include <cstdlib>
#include <iostream>
#include <chrono>

void commonFunction(int l, int h, float e, float m, int f, bool s, bool n, const std::string& command){
    
    // Añadir parámetros a la salida
    system(("echo '   l = " + std::to_string(l) +
            ", h = " + std::to_string(h) +
            ", e = " + std::to_string(e) +
            ", m = " + std::to_string(m) +
            ", f = " + std::to_string(f) +
            ", s = " + (s ? "true" : "false") +
            ", n = " + (n ? "true" : "false") + "' >> ./results1.out").c_str());

    auto start_time = std::chrono::high_resolution_clock::now();

    // Sustituir el comando específico por la variable 'command'
    system((command + " | tail -n 4 >> ./results1.out").c_str());

    auto end_time = std::chrono::high_resolution_clock::now();
    auto elapsed_time = std::chrono::duration_cast<std::chrono::duration<double>>(end_time - start_time).count();

    // Añadir tiempo transcurrido a la salida
    system(("echo 'Elapsed time: " + std::to_string(elapsed_time) + " seconds\n' >> ./results1.out").c_str());
}

int main() {

    system("echo 'EXPERIMENT 1' >> ./results1.out");

    system("echo '1. XOR dataset:\n' >> ./results1.out");

    commonFunction(2, 100, 0.7, 1.0, 1, true, false, "../../la2 -t ../../datasetsLA2IMC/dat/train_xor.dat -T ../../datasetsLA2IMC/dat/train_xor.dat -i 1000 -l 2 -h 100 -e 0.7 -m 1 -f 1 -s");
    
    commonFunction(2, 100, 0.1, 0.9, 1, true,false, "../../la2 -t ../../datasetsLA2IMC/dat/train_xor.dat -T ../../datasetsLA2IMC/dat/train_xor.dat -i 1000 -l 2 -h 100 -e 0.1 -m 0.9 -f 1 -s");
    
    

    system("\necho '2. ProPublica COMPAS dataset:\n' >> ./results1.out");

    commonFunction(1, 4, 0.7, 1.0, 1, true, false, "../../la2 -t ../../datasetsLA2IMC/dat/train_compas.dat -T ../../datasetsLA2IMC/dat/test_compas.dat -i 1000 -l 1 -h 4 -e 0.7 -m 1 -f 1 -s");
    commonFunction(1, 8, 0.7, 1.0, 1, true, false, "../../la2 -t ../../datasetsLA2IMC/dat/train_compas.dat -T ../../datasetsLA2IMC/dat/test_compas.dat -i 1000 -l 1 -h 8 -e 0.7 -m 1 -f 1 -s");
    commonFunction(1, 16, 0.7, 1.0, 1, true, false, "../../la2 -t ../../datasetsLA2IMC/dat/train_compas.dat -T ../../datasetsLA2IMC/dat/test_compas.dat -i 1000 -l 1 -h 16 -e 0.7 -m 1 -f 1 -s");
    commonFunction(1, 64, 0.7, 1.0, 1, true, false, "../../la2 -t ../../datasetsLA2IMC/dat/train_compas.dat -T ../../datasetsLA2IMC/dat/test_compas.dat -i 1000 -l 1 -h 64 -e 0.7 -m 1 -f 1 -s");
    
    commonFunction(2, 4, 0.7, 1.0, 1, true, false, "../../la2 -t ../../datasetsLA2IMC/dat/train_compas.dat -T ../../datasetsLA2IMC/dat/test_compas.dat -i 1000 -l 2 -h 4 -e 0.7 -m 1 -f 1 -s");
    commonFunction(2, 8, 0.7, 1.0, 1, true, false, "../../la2 -t ../../datasetsLA2IMC/dat/train_compas.dat -T ../../datasetsLA2IMC/dat/test_compas.dat -i 1000 -l 2 -h 8 -e 0.7 -m 1 -f 1 -s");
    commonFunction(2, 16, 0.7, 1.0, 1, true, false, "../../la2 -t ../../datasetsLA2IMC/dat/train_compas.dat -T ../../datasetsLA2IMC/dat/test_compas.dat -i 1000 -l 2 -h 16 -e 0.7 -m 1 -f 1 -s");
    commonFunction(2, 64, 0.7, 1.0, 1, true, false, "../../la2 -t ../../datasetsLA2IMC/dat/train_compas.dat -T ../../datasetsLA2IMC/dat/test_compas.dat -i 1000 -l 2 -h 64 -e 0.7 -m 1 -f 1 -s");
    
    
    system("\necho '3. noMNIST dataset:\n' >> ./results1.out");

    commonFunction(1, 4, 0.7, 1.0, 1, true, false, "../../la2 -t ../../datasetsLA2IMC/dat/train_nomnist.dat -T ../../datasetsLA2IMC/dat/test_nomnist.dat -i 1000 -l 1 -h 4 -e 0.7 -m 1 -f 1 -s");
    commonFunction(1, 8, 0.7, 1.0, 1, true, false, "../../la2 -t ../../datasetsLA2IMC/dat/train_nomnist.dat -T ../../datasetsLA2IMC/dat/test_nomnist.dat -i 1000 -l 1 -h 8 -e 0.7 -m 1 -f 1 -s");
    commonFunction(1, 16, 0.7, 1.0, 1, true, false, "../../la2 -t ../../datasetsLA2IMC/dat/train_nomnist.dat -T ../../datasetsLA2IMC/dat/test_nomnist.dat -i 1000 -l 1 -h 16 -e 0.7 -m 1 -f 1 -s");
    commonFunction(1, 64, 0.7, 1.0, 1, true, false, "../../la2 -t ../../datasetsLA2IMC/dat/train_nomnist.dat -T ../../datasetsLA2IMC/dat/test_nomnist.dat -i 1000 -l 1 -h 64 -e 0.7 -m 1 -f 1 -s");
    
    commonFunction(2, 4, 0.7, 1.0, 1, true, false, "../../la2 -t ../../datasetsLA2IMC/dat/train_nomnist.dat -T ../../datasetsLA2IMC/dat/test_nomnist.dat -i 1000 -l 2 -h 4 -e 0.7 -m 1 -f 1 -s");
    commonFunction(2, 8, 0.7, 1.0, 1, true, false, "../../la2 -t ../../datasetsLA2IMC/dat/train_nomnist.dat -T ../../datasetsLA2IMC/dat/test_nomnist.dat -i 1000 -l 2 -h 8 -e 0.7 -m 1 -f 1 -s");
    commonFunction(2, 16, 0.7, 1.0, 1, true, false, "../../la2 -t ../../datasetsLA2IMC/dat/train_nomnist.dat -T ../../datasetsLA2IMC/dat/test_nomnist.dat -i 1000 -l 2 -h 16 -e 0.7 -m 1 -f 1 -s");
    commonFunction(2, 64, 0.7, 1.0, 1, true, false, "../../la2 -t ../../datasetsLA2IMC/dat/train_nomnist.dat -T ../../datasetsLA2IMC/dat/test_nomnist.dat -i 1000 -l 2 -h 64 -e 0.7 -m 1 -f 1 -s");
    
    return 0;
}