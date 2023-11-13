    #include <iostream>
    #include <algorithm>
    using namespace std;

    int findCommonCharacters(string s1, string s2) ;

    main() {


    string s1;
    string s2 ;

        cout<< "Enter the first string: ";
        getline(cin,s1) ;
        cout<< "Enter the second string: ";
        getline(cin,s2) ;


  int count = findCommonCharacters(s1, s2);

  cout << "Number of common characters: " << count ;

}

            int findCommonCharacters(string s1, string s2) {
            
            
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());

            
            int count = 0;
            int i = 0, j = 0;

                    while (i < s1.length() && j < s2.length()) {
                        if (s1[i] == s2[j]) {
                        count++;
                        i++;
                        j++;
                        } else if (s1[i] < s2[j]) {
                        i++;
                        } else {
                        j++;
                        }
                    }

            return count;
            }

