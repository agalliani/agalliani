void graph(){
   
   Double_t x[3] = {1,3,5};
   Double_t y[3] = {1,9,25};

   TGraph *gr = new TGraph();
   gr->SetPoint(0,1,3);
   gr->SetPoint(1,3,9);
   gr->SetPoint(2,5,25);


gr->GetXaxis()->SetTitle("X");
gr->GetYaxis()->SetTitle("Y");

    

   TCanvas *c = new TCanvas();
   gr->Draw("AC*");



}
