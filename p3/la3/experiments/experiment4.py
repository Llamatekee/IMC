# Script to run the fourth experiment and save its results

import os

# Matcher to get only CCR values for classification datasets as regresion dataset

# python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_name.csv -T ./datasetsLA3IMC/csv/test_name.csv  | grep -A 2 "Training MSE" | tail -n 2 >> ./results/experiment4_results.out

os.system("echo 'EXPERIMENT 4 (classification/regression)' >> ./results/experiment4_results.out")

os.system("echo '\nConsider a classification dataset as a regression dataset \n' >> ./results/experiment4_results.out")

os.system("echo '-ProPublica COMPAS:' >> ./results/experiment4_results.out")

os.system("echo '   r=0.05' >> ./results/experiment4_results.out")
os.system('python3 ./programs/rbf_4.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.05 -e 0.00001 | grep -A 2 "Training CCR" | tail -n 2 >> ./results/experiment4_results.out') 

os.system("echo '   r=0.15' >> ./results/experiment4_results.out")
os.system('python3 ./programs/rbf_4.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.15 -e 0.00001 | grep -A 2 "Training CCR" | tail -n 2 >> ./results/experiment4_results.out') 

os.system("echo '   r=0.25' >> ./results/experiment4_results.out")
os.system('python3 ./programs/rbf_4.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.25 -e 0.00001 | grep -A 2 "Training CCR" | tail -n 2 >> ./results/experiment4_results.out') 

os.system("echo '   r=0.5' >> ./results/experiment4_results.out")
os.system('python3 ./programs/rbf_4.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.5 -e 0.00001 | grep -A 2 "Training CCR" | tail -n 2 >> ./results/experiment4_results.out') 

os.system("echo '--Best Parameters' >> ./results/experiment4_results.out")
os.system("echo '   r=0.05' >> ./results/experiment4_results.out")
os.system('python3 ./programs/rbf_4.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.05 -e 10 | grep -A 2 "Training CCR" | tail -n 2 >> ./results/experiment4_results.out') 

os.system("echo '   r=0.15' >> ./results/experiment4_results.out")
os.system('python3 ./programs/rbf_4.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.15 -e 10 | grep -A 2 "Training CCR" | tail -n 2 >> ./results/experiment4_results.out') 

os.system("echo '   r=0.25' >> ./results/experiment4_results.out")
os.system('python3 ./programs/rbf_4.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.25 -e 10 | grep -A 2 "Training CCR" | tail -n 2 >> ./results/experiment4_results.out') 

os.system("echo '   r=0.5' >> ./results/experiment4_results.out")
os.system('python3 ./programs/rbf_4.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.5 -e 10 | grep -A 2 "Training CCR" | tail -n 2 >> ./results/experiment4_results.out') 
