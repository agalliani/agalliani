void readfiles(){

    double values[100];

    ifstream infile;
    infile.open("test.txt");
    double value;
    int i=0;
    while(1){
        infile>>value;

        if(infile.eof()){
            break;
        }
        
        values[i]=value;
        cout<<value<<endl; 
        i++;
    }

    infile.close();

    TGraph *gr = new TGraph();

    for(int i=0; i<100;i++){
        gr->SetPoint(i,i,values[i]);
    }

    TCanvas *c = new TCanvas();
    gr->Draw("AC*");

    

}