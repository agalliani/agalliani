void provaRandom(){
    TH1F *hist = new TH1F("hist", "Histogram", 100,0,100);
    TH1F *hist2 = new TH1F("hist", "Gauss Histogram", 100,0,100);


    TRandom *r = new TRandom();
    

    for(int i=0; i<10000;i++){
       hist->Fill(r->Rndm()*100);
       hist2->Fill(r->Gaus()*100);
    }

    TCanvas *c = new TCanvas();
    //hist->Draw("hist");
    hist2->Draw("hist");



}