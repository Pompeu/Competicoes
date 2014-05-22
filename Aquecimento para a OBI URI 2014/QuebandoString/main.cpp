    #include <iostream>
    #include <string>
    #include <vector>
    #include <sstream>
    int main()
    {
    std::string word;
    std::getline(std::cin,word);
    std::stringstream s_str(word);
    std::vector<std::string> words;

    std::string a1,b1,c1,d1;
        while (std::getline(s_str, word, ' ')){
            words.push_back(word);
           /* if(words.at(0))a1 = words.at(0);
            if(words.at(1))b1 = words.at(1);
            if(words.at(2))c1 = words.at(2);
            if(words.at(3))d1 = words.at(3);*/
        }

        /*if(word.at(0))a1 = words.at(0);
        else if(word.at(0) && word.at(1))b1 = words.at(1);
        else if(word.at(2))c1 = words.at(2);
        else if(word.at(3))d1 = words.at(3);
*/
    std::cout<<words.size();
           // std::cout<<a1<<b1<<c1<<d1;


    }
