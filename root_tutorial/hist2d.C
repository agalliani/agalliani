void hist2d(){
    TH2F *hist = new TH2F("hist", "Histogram", 10,-5,5,10,-5,5);

    hist->Fill(0.0,0.3);
    hist->Fill(1.0,2.0);
    hist->Fill(2.0,1.5);
    hist->Fill(3.0,-3.0);
    hist->Fill(4.0,7.0);
    hist->Fill(5.0,-0.5);
    hist->Fill(6.0,-6.0);
    hist->Fill(7.0,2.5);
    hist->Fill(-3.0, 3.2);


    hist->GetXaxis()->SetTitle("X");
    hist->GetYaxis()->SetTitle("Y");






    TCanvas *c = new TCanvas();
    hist->Draw();

    


}
