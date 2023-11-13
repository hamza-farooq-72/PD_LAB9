
    #include<iostream>
    using namespace std;

bool checkseven(int num[], int size);
 string containsSeven(int num[],int size);
    

    main(){

    int size ;
    int num[5000] ;
    
    cout<<"Enter the size of Array: " ;
    cin>> size ;
        for(int i = 0; i< size ; i++){

            cout<< "Enter Element " <<(i + 1) << ": ";
                cin >> num[i] ;
        }

            cout<< containsSeven(num,size) ;

    }

    string containsSeven(int num[],int size){

    string boom = "Boom!" ;
    string not7 = "there is no 7 in the array " ;

        int res = checkseven(num,size) ;
            if(res == 1){
                return boom ;
            }
            else if(res == 0){
                return not7 ;
            }

            }
            
        bool checkseven(int num[], int size){
        int count = 0 ;
        for(int x=0; x< size; x++){

            if(num[x]%10 == 7){
                return true ;
                break ;
            }
        }
             
                return false ;
            
        }