
    #include<iostream>
    using namespace std;


    int ColoringTime(string word[],int size);

    main(){

    int size, time ;
    string word[50] ;
    
     cout<<"Enter the size of Array: " ;
    cin>> size ;

        for(int i = 0; i < size ; i++){

            cout<< "Enter Element " <<(i + 1) << ": ";
                cin >> word[i] ; 
        }

            time = ColoringTime(word,size); 
            cout<< "Time to color: "<< time <<" seconds";

    }

    int ColoringTime(string word[],int size){
            int changeTime = 0 , FillingTime, TotalTime ;
                for(int x = 1; x < size ; x++){

                    if(word[x-1] !=word[x]){
                        changeTime++ ;
                    }
                }
                FillingTime = size*2 ;
                TotalTime = FillingTime + changeTime ;
                return TotalTime ;
    }
