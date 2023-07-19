void writeRootFile(){
    TFile *file = new TFile("root_file.root", "RECREATE");

    TH1F *hist = new TH1F("hist", "Histogram", 100,-5,5);

    hist->Fill(0.0,0.3);
    hist->Fill(1.0,2.0);
    hist->Fill(2.0,1.5);
    hist->Fill(3.0,-3.0);
    hist->Fill(4.0,7.0);
    hist->Fill(5.0,-0.5);
    hist->Fill(6.0,-6.0);
    hist->Fill(7.0,2.5);


    hist->GetXaxis()->SetTitle("X");
    hist->GetYaxis()->SetTitle("Y");

    file->Write()


    
    file->Close();
}