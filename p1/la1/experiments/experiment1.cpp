#include <cstdlib>
#include <iostream>

int main() {
    // XOR PROBLEM

    system("echo 'EXPERIMENT 1' >> ./results1/xor_results.out");
    system("echo 'Consider number of hidden layer = 1/2 and  neurons = 2, 4, 8, 32, 64 y 100 \n' >> ./results1/xor_results.out");

    system("echo '1. XOR PROBLEM:\n' >> ./results1/xor_results.out");

    system("echo '   l = 1, n = 2' >> ./results1/xor_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_xor.dat -T ../datasetsPr1IMC/dat/test_xor.dat -i 1000 -l 1 -h 2 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/{print $0}' | tail -n 2 >> ./results1/xor_results.out");
    system("echo '   l = 2, n = 2' >> ./results1/xor_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_xor.dat -T ../datasetsPr1IMC/dat/test_xor.dat -i 1000 -l 2 -h 2 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/{print $0}' | tail -n 2 >> ./results1/xor_results.out");
    system("echo '   l = 5, n = 2' >> ./results1/xor_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_xor.dat -T ../datasetsPr1IMC/dat/test_xor.dat -i 1000 -l 5 -h 2 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/{print $0}' | tail -n 2 >> ./results1/xor_results.out");
   
    system("echo '\n' >> ./results1/xor_results.out");

    system("echo '  l = 1, n = 4' >> ./results1/xor_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_xor.dat -T ../datasetsPr1IMC/dat/test_xor.dat -i 1000 -l 1 -h 4 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/xor_results.out");
    system("echo '  l = 2, n = 4' >> ./results1/xor_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_xor.dat -T ../datasetsPr1IMC/dat/test_xor.dat -i 1000 -l 2 -h 4 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/xor_results.out");
    system("echo '   l = 5, n = 4' >> ./results1/xor_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_xor.dat -T ../datasetsPr1IMC/dat/test_xor.dat -i 1000 -l 5 -h 4 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/{print $0}' | tail -n 2 >> ./results1/xor_results.out");
   
    system("echo '\n' >> ./results1/xor_results.out");
   
    system("echo '  l = 1, n = 8' >> ./results1/xor_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_xor.dat -T ../datasetsPr1IMC/dat/test_xor.dat -i 1000 -l 1 -h 8 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/xor_results.out");
    system("echo '  l = 2, n = 8' >> ./results1/xor_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_xor.dat -T ../datasetsPr1IMC/dat/test_xor.dat -i 1000 -l 2 -h 8 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/xor_results.out");
    system("echo '   l = 5, n = 8' >> ./results1/xor_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_xor.dat -T ../datasetsPr1IMC/dat/test_xor.dat -i 1000 -l 5 -h 8 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/{print $0}' | tail -n 2 >> ./results1/xor_results.out");
   
    system("echo '\n' >> ./results1/xor_results.out");
   
    system("echo '  l = 1, n = 32' >> ./results1/xor_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_xor.dat -T ../datasetsPr1IMC/dat/test_xor.dat -i 1000 -l 1 -h 32 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/xor_results.out");
    system("echo '  l = 2, n = 32' >> ./results1/xor_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_xor.dat -T ../datasetsPr1IMC/dat/test_xor.dat -i 1000 -l 2 -h 32 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/xor_results.out");
    system("echo '   l = 5, n = 32' >> ./results1/xor_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_xor.dat -T ../datasetsPr1IMC/dat/test_xor.dat -i 1000 -l 5 -h 32 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/{print $0}' | tail -n 2 >> ./results1/xor_results.out");
   
    system("echo '\n' >> ./results1/xor_results.out");
   
    system("echo '  l = 1, n = 64' >> ./results1/xor_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_xor.dat -T ../datasetsPr1IMC/dat/test_xor.dat -i 1000 -l 1 -h 64 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/xor_results.out");
    system("echo '  l = 2, n = 64' >> ./results1/xor_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_xor.dat -T ../datasetsPr1IMC/dat/test_xor.dat -i 1000 -l 2 -h 64 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/xor_results.out");
    system("echo '   l = 5, n = 64' >> ./results1/xor_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_xor.dat -T ../datasetsPr1IMC/dat/test_xor.dat -i 1000 -l 5 -h 64 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/{print $0}' | tail -n 2 >> ./results1/xor_results.out");
   
    system("echo '\n' >> ./results1/xor_results.out");
   
    system("echo '  l = 1, n = 100' >> ./results1/xor_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_xor.dat -T ../datasetsPr1IMC/dat/test_xor.dat -i 1000 -l 1 -h 100 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/xor_results.out");
    system("echo '  l = 2, n = 100' >> ./results1/xor_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_xor.dat -T ../datasetsPr1IMC/dat/test_xor.dat -i 1000 -l 2 -h 100 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/xor_results.out");
    system("echo '   l = 5, n = 100' >> ./results1/xor_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_xor.dat -T ../datasetsPr1IMC/dat/test_xor.dat -i 1000 -l 5 -h 100 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/{print $0}' | tail -n 2 >> ./results1/xor_results.out");

    // SINE FUNCTION

    system("echo 'EXPERIMENT 1' >> ./results1/sin_results.out");
    system("echo 'Consider number of hidden layer = 1/2 and  neurons = 2, 4, 8, 32, 64 y 100 \n' >> ./results1/sin_results.out");

    system("\n echo '2. SINE FUNCTION:\n' >> ./results1/sin_results.out");

    system("echo '   l = 1, n = 2' >> ./results1/sin_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_sin.dat -T ../datasetsPr1IMC/dat/test_sin.dat -i 1000 -l 1 -h 2 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/sin_results.out");
    system("echo '   l = 2, n = 2' >> ./results1/sin_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_sin.dat -T ../datasetsPr1IMC/dat/test_sin.dat -i 1000 -l 2 -h 2 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/sin_results.out");
   
    system("echo '\n' >> ./results1/sin_results.out");

    system("echo '  l = 1, n = 4' >> ./results1/sin_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_sin.dat -T ../datasetsPr1IMC/dat/test_sin.dat -i 1000 -l 1 -h 4 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/sin_results.out");
    system("echo '  l = 2, n = 4' >> ./results1/sin_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_sin.dat -T ../datasetsPr1IMC/dat/test_sin.dat -i 1000 -l 2 -h 4 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/sin_results.out");

    system("echo '\n' >> ./results1/sin_results.out");
   
    system("echo '  l = 1, n = 8' >> ./results1/sin_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_sin.dat -T ../datasetsPr1IMC/dat/test_sin.dat -i 1000 -l 1 -h 8 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/sin_results.out");
    system("echo '  l = 2, n = 8' >> ./results1/sin_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_sin.dat -T ../datasetsPr1IMC/dat/test_sin.dat -i 1000 -l 2 -h 8 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/sin_results.out");

    system("echo '\n' >> ./results1/sin_results.out");
   
    system("echo '  l = 1, n = 32' >> ./results1/sin_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_sin.dat -T ../datasetsPr1IMC/dat/test_sin.dat -i 1000 -l 1 -h 32 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/sin_results.out");
    system("echo '  l = 2, n = 32' >> ./results1/sin_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_sin.dat -T ../datasetsPr1IMC/dat/test_sin.dat -i 1000 -l 2 -h 32 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/sin_results.out");

    system("echo '\n' >> ./results1/sin_results.out");
   
    system("echo '  l = 1, n = 64' >> ./results1/sin_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_sin.dat -T ../datasetsPr1IMC/dat/test_sin.dat -i 1000 -l 1 -h 64 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/sin_results.out");
    system("echo '  l = 2, n = 64' >> ./results1/sin_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_sin.dat -T ../datasetsPr1IMC/dat/test_sin.dat -i 1000 -l 2 -h 64 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/sin_results.out");

    system("echo '\n' >> ./results1/sin_results.out");
   
    system("echo '  l = 1, n = 100' >> ./results1/sin_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_sin.dat -T ../datasetsPr1IMC/dat/test_sin.dat -i 1000 -l 1 -h 100 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/sin_results.out");
    system("echo '  l = 2, n = 100' >> ./results1/sin_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_sin.dat -T ../datasetsPr1IMC/dat/test_sin.dat -i 1000 -l 2 -h 100 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/sin_results.out");


    // QUAKE DATASET

    system("echo 'EXPERIMENT 1' >> ./results1/quake_results.out");
    system("echo 'Consider number of hidden layer = 1/2 and  neurons = 2, 4, 8, 32, 64 y 100 \n' >> ./results1/quake_results.out");

    system("\n echo '3. QUAKE DATASET:\n' >> ./results1/quake_results.out");

    system("echo '   l = 1, n = 2' >> ./results1/quake_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_quake.dat -T ../datasetsPr1IMC/dat/test_quake.dat -i 1000 -l 1 -h 2 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/quake_results.out");
    system("echo '   l = 2, n = 2' >> ./results1/quake_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_quake.dat -T ../datasetsPr1IMC/dat/test_quake.dat -i 1000 -l 2 -h 2 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/quake_results.out");
   
    system("echo '\n' >> ./results1/quake_results.out");

    system("echo '  l = 1, n = 4' >> ./results1/quake_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_quake.dat -T ../datasetsPr1IMC/dat/test_quake.dat -i 1000 -l 1 -h 4 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/quake_results.out");
    system("echo '  l = 2, n = 4' >> ./results1/quake_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_quake.dat -T ../datasetsPr1IMC/dat/test_quake.dat -i 1000 -l 2 -h 4 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/quake_results.out");

    system("echo '\n' >> ./results1/quake_results.out");
   
    system("echo '  l = 1, n = 8' >> ./results1/quake_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_quake.dat -T ../datasetsPr1IMC/dat/test_quake.dat -i 1000 -l 1 -h 8 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/quake_results.out");
    system("echo '  l = 2, n = 8' >> ./results1/quake_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_quake.dat -T ../datasetsPr1IMC/dat/test_quake.dat -i 1000 -l 2 -h 8 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/quake_results.out");

    system("echo '\n' >> ./results1/quake_results.out");
   
    system("echo '  l = 1, n = 32' >> ./results1/quake_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_quake.dat -T ../datasetsPr1IMC/dat/test_quake.dat -i 1000 -l 1 -h 32 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/quake_results.out");
    system("echo '  l = 2, n = 32' >> ./results1/quake_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_quake.dat -T ../datasetsPr1IMC/dat/test_quake.dat -i 1000 -l 2 -h 32 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/quake_results.out");

    system("echo '\n' >> ./results1/quake_results.out");
   
    system("echo '  l = 1, n = 64' >> ./results1/quake_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_quake.dat -T ../datasetsPr1IMC/dat/test_quake.dat -i 1000 -l 1 -h 64 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/quake_results.out");
    system("echo '  l = 2, n = 64' >> ./results1/quake_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_quake.dat -T ../datasetsPr1IMC/dat/test_quake.dat -i 1000 -l 2 -h 64 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/quake_results.out");

    system("echo '\n' >> ./results1/quake_results.out");
   
    system("echo '  l = 1, n = 100' >> ./results1/quake_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_quake.dat -T ../datasetsPr1IMC/dat/test_quake.dat -i 1000 -l 1 -h 100 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/quake_results.out");
    system("echo '  l = 2, n = 100' >> ./results1/quake_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_quake.dat -T ../datasetsPr1IMC/dat/test_quake.dat -i 1000 -l 2 -h 100 -e 0.1 -m 0.9  | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/quake_results.out");

    // AUTO MPG DATASET

    system("echo 'EXPERIMENT 1' >> ./results1/mpg_results.out");
    system("echo 'Consider number of hidden layer = 1/2 and  neurons = 2, 4, 8, 32, 64 y 100 \n' >> ./results1/mpg_results.out");

    system("\n echo '3. AUTO MPG DATASET:\n' >> ./results1/mpg_results.out");

    system("echo '   l = 1, n = 2' >> ./results1/mpg_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_mpg.dat -T ../datasetsPr1IMC/dat/test_mpg.dat -i 1000 -l 1 -h 2 -e 0.1 -m 0.9 -s | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/mpg_results.out");
    system("echo '   l = 2, n = 2' >> ./results1/mpg_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_mpg.dat -T ../datasetsPr1IMC/dat/test_mpg.dat -i 1000 -l 2 -h 2 -e 0.1 -m 0.9 -s | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/mpg_results.out");
   
    system("echo '\n' >> ./results1/mpg_results.out");

    system("echo '  l = 1, n = 4' >> ./results1/mpg_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_mpg.dat -T ../datasetsPr1IMC/dat/test_mpg.dat -i 1000 -l 1 -h 4 -e 0.1 -m 0.9 -s | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/mpg_results.out");
    system("echo '  l = 2, n = 4' >> ./results1/mpg_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_mpg.dat -T ../datasetsPr1IMC/dat/test_mpg.dat -i 1000 -l 2 -h 4 -e 0.1 -m 0.9 -s | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/mpg_results.out");

    system("echo '\n' >> ./results1/mpg_results.out");
   
    system("echo '  l = 1, n = 8' >> ./results1/mpg_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_mpg.dat -T ../datasetsPr1IMC/dat/test_mpg.dat -i 1000 -l 1 -h 8 -e 0.1 -m 0.9 -s | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/mpg_results.out");
    system("echo '  l = 2, n = 8' >> ./results1/mpg_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_mpg.dat -T ../datasetsPr1IMC/dat/test_mpg.dat -i 1000 -l 2 -h 8 -e 0.1 -m 0.9 -s | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/mpg_results.out");

    system("echo '\n' >> ./results1/mpg_results.out");
   
    system("echo '  l = 1, n = 32' >> ./results1/mpg_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_mpg.dat -T ../datasetsPr1IMC/dat/test_mpg.dat -i 1000 -l 1 -h 32 -e 0.1 -m 0.9 -s | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/mpg_results.out");
    system("echo '  l = 2, n = 32' >> ./results1/mpg_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_mpg.dat -T ../datasetsPr1IMC/dat/test_mpg.dat -i 1000 -l 2 -h 32 -e 0.1 -m 0.9 -s | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/mpg_results.out");

    system("echo '\n' >> ./results1/mpg_results.out");
   
    system("echo '  l = 1, n = 64' >> ./results1/mpg_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_mpg.dat -T ../datasetsPr1IMC/dat/test_mpg.dat -i 1000 -l 1 -h 64 -e 0.1 -m 0.9 -s | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/mpg_results.out");
    system("echo '  l = 2, n = 64' >> ./results1/mpg_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_mpg.dat -T ../datasetsPr1IMC/dat/test_mpg.dat -i 1000 -l 2 -h 64 -e 0.1 -m 0.9 -s | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/mpg_results.out");

    system("echo '\n' >> ./results1/mpg_results.out");
   
    system("echo '  l = 1, n = 100' >> ./results1/mpg_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_mpg.dat -T ../datasetsPr1IMC/dat/test_mpg.dat -i 1000 -l 1 -h 100 -e 0.1 -m 0.9 -s | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/mpg_results.out");
    system("echo '  l = 2, n = 100' >> ./results1/mpg_results.out");
    system("../la1 -t ../datasetsPr1IMC/dat/train_mpg.dat -T ../datasetsPr1IMC/dat/test_mpg.dat -i 1000 -l 2 -h 100 -e 0.1 -m 0.9 -s | awk '/Train error/,/Test error/ {print $0}' | tail -n 2 >> ./results1/mpg_results.out");

    return 0;
}
