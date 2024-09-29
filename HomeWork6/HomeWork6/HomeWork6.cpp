#include <iostream>
#include <string>

int main()
{
    std::string movies[5][5] = { {"Commando","G.I. Joe: The Rise of Cobra","Mission Impossible","Hidden Dragon","Iron Man"},
                                {"Hot Fuzz","Very Bad Things","How to Lose a Guy in 10 Days","Idiocracy","It’s Always Sunny in Philadelphia"},
                                {"Apollo 13","Lincoln","Troy","Titanic","Inglourious Basterds"},
                                {"The Babadook","Hereditary ","Halloween","28 Days Later","The Others"},
                                {"The Fault in our Stars ","I Heart Huckabees ","Silence","House of Cards ","City of God"}
    };


    for (int i = 0; i < 5; ++i)
    
        for (int j = 0; j < 5; ++j)
        {
            std::cout<< j+1 << "." << movies[i][j]<< std::endl;
        }




   









    return 0;
}


