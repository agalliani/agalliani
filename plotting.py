import matplotlib.pyplot as plt

filepath ='/home/school54/Documents/config/simulated_rms.txt'
with open(filepath) as file:
    lines = file.readlines()
    x_1 = []
    x_2 = []
    y = [0,2,4,6]
    for line in lines:
        if(not "RMS" in line):     
            print(line.split('\t'))
            x_1.append(float(line.split('\t')[0]))
            x_2.append(float(line.split('\t')[1]))

    
    plt.plot(y,x_1)
    plt.plot(y, x_2)
    plt.show()





