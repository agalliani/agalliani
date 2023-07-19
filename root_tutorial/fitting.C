void fitting(){
    TH1F *hist = new TH1F("hist", "Histogram", 100,-5,5);
    TF1 *fit = new TF1("fit","gaus");

    TRandom *r = new TRandom();

    


    for(int i=0; i<10000;i++){
       hist->Fill(r->Gaus(0,5));
    }


    TCanvas *c = new TCanvas();
    hist->Fit("fit");









}