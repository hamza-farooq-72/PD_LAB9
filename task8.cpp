

    #include <iostream>
     #include <string>
    using namespace std;

    string findBrokenKeys(string s1, string s2) ;

    main() {


    string s1;
    string s2 ;

        cout<< "Enter the correct phrase: ";
        getline(cin,s1) ;
        cout<< "Enter what you actually typed: ";
        getline(cin,s2) ;


  

  cout << "Broken keys: " <<  findBrokenKeys(s1, s2);;

}

            string findBrokenKeys(string s1, string s2) {
            
            
             int l1 = s1.length();
             int l2 = s2.length();

            
            string brokenkey = "";
            

                    for(int x = 0 ; x<l1 ; x++){

                        if (s1[x] != s2[x]) {

                             if (brokenkey.find(s1[x]) == string::npos) {
                                brokenkey += s1[x];
                             }
                        
                    }
            }
            return brokenkey ;
            }
             