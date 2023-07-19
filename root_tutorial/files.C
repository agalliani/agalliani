void files(){

    TRandom *r = new TRandom();


    ofstream offile;
    offile.open("test.txt");

    int i=0;
    while(i<100){
        offile<<r->Gaus(0,2)<<endl;
        i++;
    }
    offile.close();




   
    
   }