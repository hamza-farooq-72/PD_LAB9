
    #include<iostream>
    using namespace std;


    void convertPINToDance(string pin);

    main(){


    string pin;
    
     cout<<"Enter your PIN (4 digits): " ;
    cin>>pin;
   
           convertPINToDance(pin);

    }

    void convertPINToDance(string pin){
        
        int length = 0 , indexNum = 0;


        length = pin.length();

        
    
                 if(length!= 4){
                cout<< "Invalid input." ;
                }

                else{
        string Arr[10]= {"Shimmy","Shake","Pirouette","Slide","Box Step","Headspin","Dosado","Pop","Lock","Arabesque"} ;
                    
        
                for(int x = 0; x < 4; x++){
                       if((pin[0] != '0') && (pin[0] != '1') && (pin[0] != '2') && (pin[0] != '3') && (pin[0] != '4') && (pin[0] != '5') && (pin[0] != '6') && (pin[0] != '7') && (pin[0] != '8') && (pin[0] != '9') || (pin[1] != '0') && (pin[1] != '1') && (pin[1] != '2') && (pin[1] != '3') && (pin[1] != '4') && (pin[1] != '5') && (pin[1] != '6') && (pin[1] != '7') && (pin[1] != '8') && (pin[1] != '9') || (pin[2] != '0') && (pin[2] != '1') && (pin[2] != '2') && (pin[2] != '3') && (pin[2] != '4') && (pin[2] != '5') && (pin[2] != '6') && (pin[2] != '7') && (pin[2] != '8') && (pin[2] != '9') || (pin[3] != '0') && (pin[3] != '1') && (pin[3] != '2') && (pin[3] != '3') && (pin[3] != '4') && (pin[3] != '5') && (pin[3] != '6') && (pin[3] != '7') && (pin[3] != '8') && (pin[3] != '9')){
                        cout<< "Invalid input." ;
                        break ; }
                    
                     indexNum = (pin[x]-'0')+(x) ;

                             if(indexNum >= 10){
                                indexNum = indexNum-10;
                             }
                             cout<< Arr[indexNum] ;

                             if(x<3){
                            cout<<", ";
                                }

            }
    }
    
    }
    