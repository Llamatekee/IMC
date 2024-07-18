# Script to run the first experiment and save its results

import os

# Matcher to get the values for regression datasets

# python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_name.csv -T ./datasetsLA3IMC/csv/test_name.csv  | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out

os.system("echo 'EXPERIMENT 1 (ratios)' >> ./results/experiment1_results.out")

os.system("echo 'Consider number of hidden neurons = 5%, 15%, 25%, 50% \n' >> ./results/experiment1_results.out")

os.system("echo '1. Sin-function dataset:' >> ./results/experiment1_results.out")

os.system("echo '   r=0.05' >> ./results/experiment1_results.out")
os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_sin.csv -T ./datasetsLA3IMC/csv/test_sin.csv -r 0.05 | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out')

os.system("echo '   r=0.15' >> ./results/experiment1_results.out")
os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_sin.csv -T ./datasetsLA3IMC/csv/test_sin.csv -r 0.15 | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out')

os.system("echo '   r=0.25' >> ./results/experiment1_results.out")
os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_sin.csv -T ./datasetsLA3IMC/csv/test_sin.csv -r 0.25 | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out')

os.system("echo '   r=0.5' >> ./results/experiment1_results.out")
os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_sin.csv -T ./datasetsLA3IMC/csv/test_sin.csv -r 0.5 | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out')


os.system("echo '\n2. Quake dataset:' >> ./results/experiment1_results.out")

os.system("echo '   r=0.05' >> ./results/experiment1_results.out")
os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_quake.csv -T ./datasetsLA3IMC/csv/test_quake.csv -r 0.05 | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out')

os.system("echo '   r=0.15' >> ./results/experiment1_results.out")
os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_quake.csv -T ./datasetsLA3IMC/csv/test_quake.csv -r 0.15 | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out')

os.system("echo '   r=0.25' >> ./results/experiment1_results.out")
os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_quake.csv -T ./datasetsLA3IMC/csv/test_quake.csv -r 0.25 | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out')

os.system("echo '   r=0.5' >> ./results/experiment1_results.out")
os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_quake.csv -T ./datasetsLA3IMC/csv/test_quake.csv -r 0.5 | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out')


os.system("echo '\n3. Auto MPG dataset:' >> ./results/experiment1_results.out")

os.system("echo '   r=0.05' >> ./results/experiment1_results.out")
os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_mpg.csv -T ./datasetsLA3IMC/csv/test_mpg.csv -r 0.05 | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out')

os.system("echo '   r=0.15' >> ./results/experiment1_results.out")
os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_mpg.csv -T ./datasetsLA3IMC/csv/test_mpg.csv -r 0.15 | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out')

os.system("echo '   r=0.25' >> ./results/experiment1_results.out")
os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_mpg.csv -T ./datasetsLA3IMC/csv/test_mpg.csv -r 0.25 | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out')

os.system("echo '   r=0.5' >> ./results/experiment1_results.out")
os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_mpg.csv -T ./datasetsLA3IMC/csv/test_mpg.csv -r 0.5 | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out')


# Matcher to get the values for classification datasets

# python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_name.csv -T ./datasetsLA3IMC/csv/test_name.csv -c | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out

# If we want to save parameters obtanided with -f option, we must change:
# python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_name.csv -T ./datasetsLA3IMC/csv/test_name.csv -c -f | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out

os.system("echo '\n4. ProPublica COMPAS:' >> ./results/experiment1_results.out")

os.system("echo '   r=0.05' >> ./results/experiment1_results.out")
#os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.05 -c -e 0.00001 | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out') 
os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.05 -c -f | grep -A 20 "Training MSE" | tail -n 20 >> ./results/experiment1_results.out') 

os.system("echo '   r=0.15' >> ./results/experiment1_results.out")
#os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.15 -c -e 0.00001 | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out') 
os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.15 -c -f | grep -A 20 "Training MSE" | tail -n 20 >> ./results/experiment1_results.out') 

os.system("echo '   r=0.25' >> ./results/experiment1_results.out")
#os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.25 -c -e 0.00001 | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out') 
os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.25 -c -f | grep -A 20 "Training MSE" | tail -n 20 >> ./results/experiment1_results.out') 

os.system("echo '   r=0.5' >> ./results/experiment1_results.out")
#os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.5 -c -e 0.00001 | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out') 
os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_compas.csv -T ./datasetsLA3IMC/csv/test_compas.csv -r 0.5 -c -f | grep -A 20 "Training MSE" | tail -n 20 >> ./results/experiment1_results.out') 

os.system("echo '\n5. noMNIST dataset:' >> ./results/experiment1_results.out")

os.system("echo '   r=0.05' >> ./results/experiment1_results.out")
os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.05 -c -e 0.00001 | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out') 
#os.system('python3 ./programs/rbf_nomnist.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.05 -c -f | grep -A 20 "Training MSE" | tail -n 20 >> ./results/experiment1_results.out') 

os.system("echo '   r=0.15' >> ./results/experiment1_results.out")
os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.15 -c -e 0.00001 | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out') 
#os.system('python3 ./programs/rbf_nomnist.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.15 -c -f | grep -A 20 "Training MSE" | tail -n 20 >> ./results/experiment1_results.out') 

os.system("echo '   r=0.25' >> ./results/experiment1_results.out")
os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.25 -c -e 0.00001 | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out') 
#os.system('python3 ./programs/rbf_nomnist.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.25 -c -f | grep -A 20 "Training MSE" | tail -n 20 >> ./results/experiment1_results.out') 

os.system("echo '   r=0.5' >> ./results/experiment1_results.out")
os.system('python3 ./programs/rbf.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.5 -c -e 0.00001 | grep -A 4 "Training MSE" | tail -n 4 >> ./results/experiment1_results.out') 
#os.system('python3 ./programs/rbf_nomnist.py -t ./datasetsLA3IMC/csv/train_nomnist.csv -T ./datasetsLA3IMC/csv/test_nomnist.csv -r 0.5 -c -f | grep -A 20 "Training MSE" | tail -n 20 >> ./results/experiment1_results.out') 
