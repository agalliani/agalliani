import ROOT
import numpy as np


def calculateRMS():
    file = ROOT.TFile.Open("output/QDC0bit.root")
    x_residuals = file.Get("DetectorHistogrammer/mydetector/residuals/residual_x")
    y_residuals = file.Get("DetectorHistogrammer/mydetector/residuals/residual_y")

    rms_x = x_residuals.GetRMS()
    rms_y = y_residuals.GetRMS()

    with open('simulated_rms.txt', 'a') as file:
        file.write(str(rms_x)+ "\t"+str(rms_y)+"\n")

        file.close()
    return rms_x,rms_y

print("Residual RMS:")
print(calculateRMS())