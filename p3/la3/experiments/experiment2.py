# Script to run the second experiment and save its results

import os

# Matcher to get the number of coefficients for classification datasets

# python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_name.csv -T ./datasetsLA3IMC/csv/test_name.csv -c | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out

os.system("echo 'EXPERIMENT 2' >> ./results/experiment2_results.out")

os.system("echo 'Comparing numbers of coefficients\n' >> ./results/experiment2_results.out")

os.system("echo '1. ProPublica COMPAS:' >> ./results/experiment2_results.out")

os.system("echo '   r=0.5, η = 10−3, L1' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.5 -c -e 0.001 | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 10−3, L2' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.5 -c -e 0.001 -l | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 10−2, L1' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.5 -c -e 0.01 | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 10−2, L2' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.5 -c -e 0.01 -l | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 10−1, L1' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.5 -c -e 0.1 | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 10−1, L2' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.5 -c -e 0.1 -l | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 1, L1' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.5 -c -e 1 | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 1, L2' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.5 -c -e 1 -l | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 10, L1' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.5 -c -e 10 | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 10, L2' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.5 -c -e 10 -l | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 100, L1' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.5 -c -e 100 | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 100, L2' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.5 -c -e 100 -l | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 1000, L1' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.5 -c -e 1000 | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 1000, L2' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.5 -c -e 1000 -l | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  


os.system("echo '\n2. noMNIST dataset:' >> ./results/experiment2_results.out")

os.system("echo '   r=0.5, η = 10−3, L1' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.5 -c -e 0.001 | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 10−3, L2' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.5 -c -e 0.001 -l | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 10−2, L1' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.5 -c -e 0.01 | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 10−2, L2' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.5 -c -e 0.01 -l | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 10−1, L1' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.5 -c -e 0.1 | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 10−1, L2' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.5 -c -e 0.1 -l | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 1, L1' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.5 -c -e 1 | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 1, L2' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.5 -c -e 1 -l | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 10, L1' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.5 -c -e 10 | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 10, L2' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.5 -c -e 10 -l | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 100, L1' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.5 -c -e 100 | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 100, L2' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.5 -c -e 100 -l | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 1000, L1' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.5 -c -e 1000 | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  

os.system("echo '   r=0.5, η = 1000, L2' >> ./results/experiment2_results.out")
os.system('python3 ./programs/rbf_2.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.5 -c -e 1000 -l | grep -A 6 "Training MSE" | tail -n 6 >> ./results/experiment2_results.out')  
