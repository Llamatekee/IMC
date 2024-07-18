# Script to run the third experiment and save its results

import os

# Matcher to get all values for classification datasets

# python3 ./programs/rbf_3.py -t ./datasetsLA3IMC/csv/train_name.csv -T ./datasetsLA3IMC/csv/test_name.csv  | grep -A 5 "Training MSE" | tail -n 5 >> ./results/experiment3_results.out

os.system("echo 'EXPERIMENT 3' >> ./results/experiment3_results.out")

os.system("echo 'Training a model using LogisticRegressionCV\n' >> ./results/experiment3_results.out")

# python3 ./programs/rbf_3.py -t ./datasetsLA3IMC/csv/train_name.csv -T ./datasetsLA3IMC/csv/test_name.csv -c | grep -A 5 "Training MSE" | tail -n 5 >> ./results/experiment3_results.out

os.system("echo '1. ProPublica COMPAS:' >> ./results/experiment3_results.out")

os.system("echo '   r=0.05' >> ./results/experiment3_results.out")
os.system('python3 ./programs/rbf_3.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.05 -c -v | grep -A 5 "Training MSE" | tail -n 5 >> ./results/experiment3_results.out')  

os.system("echo '   r=0.15' >> ./results/experiment3_results.out")
os.system('python3 ./programs/rbf_3.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.15 -c -v | grep -A 5 "Training MSE" | tail -n 5 >> ./results/experiment3_results.out')  

os.system("echo '   r=0.25' >> ./results/experiment3_results.out")
os.system('python3 ./programs/rbf_3.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.25 -c -v | grep -A 5 "Training MSE" | tail -n 5 >> ./results/experiment3_results.out')  

os.system("echo '   r=0.5' >> ./results/experiment3_results.out")
os.system('python3 ./programs/rbf_3.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.5 -c -v | grep -A 5 "Training MSE" | tail -n 5 >> ./results/experiment3_results.out')  

os.system("echo '\n2. noMNIST dataset:' >> ./results/experiment3_results.out")

os.system("echo '   r=0.05' >> ./results/experiment3_results.out")
os.system('python3 ./programs/rbf_3.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.05 -c -v | grep -A 5 "Training MSE" | tail -n 5 >> ./results/experiment3_results.out')  

os.system("echo '   r=0.15' >> ./results/experiment3_results.out")
os.system('python3 ./programs/rbf_3.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.15 -c -v | grep -A 5 "Training MSE" | tail -n 5 >> ./results/experiment3_results.out')  

os.system("echo '   r=0.25' >> ./results/experiment3_results.out")
os.system('python3 ./programs/rbf_3.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.25 -c -v | grep -A 5 "Training MSE" | tail -n 5 >> ./results/experiment3_results.out')  

os.system("echo '   r=0.5' >> ./results/experiment3_results.out")
os.system('python3 ./programs/rbf_3.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.5 -c -v | grep -A 5 "Training MSE" | tail -n 5 >> ./results/experiment3_results.out')  
