from matplotlib import pyplot

filepath ='/home/school54/Documents/config/simulated_rms_QDC.txt'
with open(filepath) as file:
    lines = file.readlines()
    x = []
    y = []
    for line in lines:
        if(not "RMS" in line):
            x.append(line.split('\t')[0])
            print(line.split('\t'))
            y.append(line.split('\t')[1])





