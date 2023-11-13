

    #include<iostream>
    using namespace std;

bool AreAllElementsIdentical(string wordOrLetter[], int size);
    

    main(){

    int size ;
    string wordOrLetter[100] ;
    
    cout<<"Enter the size of Array: " ;
    cin>> size ;
        for(int i = 0; i< size ; i++){

            cout<< "Enter Element " <<(i + 1) << ": ";
                cin >> wordOrLetter[i] ;
        }

    cout<< AreAllElementsIdentical(wordOrLetter, size) ;

    }
            
        bool AreAllElementsIdentical(string wordOrLetter[], int size){
        int count = 0 ;
        for(int x=0; x< size; x++){

            if(wordOrLetter[x]!= wordOrLetter[0] ){
                return false ;
                break ;
            }
        }
             
                return true ;
            
        }