#include <iostream>
#include "snowman.hpp"
#include <stdexcept>

namespace ariel
{
    std::string snowman(const int& num)
    {
        

        std::string ans_snowman;

        std::string temp = std::to_string(num); // we do conversion
       // 12341234 -> "12341234"
       
        if(temp.length()!=8)
        {
           throw std::invalid_argument("Invalid Length");
        }

        

        
        
        ans_snowman += hat((int)temp.at(0)-48) + "\n";


        if (((int)temp.at(4)-48 ) == 2)
        {
            ans_snowman += leftArme((int)temp.at(4)-48);
        }


        ans_snowman += "("; // open (

        ans_snowman += leftEye((int)temp.at(2)-48);

        ans_snowman += nose((int)temp.at(1)-48) ;

        ans_snowman += rightEye((int)temp.at(3)-48) ;

        if (((int)temp.at(5)-48 ) == 2)
        {
            ans_snowman += ")";
            ans_snowman += rightArme((int)temp.at(5)-48) ;
            ans_snowman += "\n";
        }

        else
        {
            ans_snowman += ")\n";
        }
       
       if (((int)temp.at(4)-48 ) != 2)
        {
            
            ans_snowman += leftArme((int)temp.at(4)-48) ;
             
        }

       

        ans_snowman += "("; // open (
       

        ans_snowman += torso((int)temp.at(6)-48);
    
        
        ans_snowman += ")";
       if (((int)temp.at(5)-48 ) != 2)
        {
           
            ans_snowman += rightArme((int)temp.at(5)-48) ;  
             
        }

        ans_snowman += "\n";
       
        ans_snowman += " ("; // open (

        ans_snowman += base((int)temp.at(7)-48) ;

        ans_snowman += ")\n"; // close )


        return ans_snowman;
    }







    std::string hat(int option)
    {
       
        switch(option)
        {
            case 1:
                    return "_===_";
            case 2:
                    return "___\n.....";
            case 3:
                    return "_\n /_\\";
            case 4:
                    return "___\n(_*_)";
            default:
                    throw std::invalid_argument("The number is invalid");
        }
        
    }

    std::string nose(int option)
    {
        switch(option)
        
        {
            case 1:
                    return ",";
            case 2:
                    return ".";
            case 3:
                    return "_";
            case 4:
                    return " ";
            default:
                    throw std::invalid_argument("The number is invalid");
        }           
        
        
    }

    std::string leftEye(int option)
    {
        switch(option)
        {
            case 1:
                    return ".";
            case 2:
                    return "o";
            case 3:
                    return "O";
            case 4:
                    return "-";
            default:
                    throw std::invalid_argument("The number is invalid");        
        }
       
  
    }
    std::string rightEye(int option)
    {
        switch(option)
        {
            case 1:
                    return ".";
            case 2:
                    return "o";
            case 3:
                    return "O";
            case 4:
                    return "-";
            default:
                    throw std::invalid_argument("The number is invalid");
        }
        
  
    }


    std::string leftArme(int option)
    {
        switch(option)
        {
            case 1:
                    return "<";
            case 2:
                    return "\\";
            case 3:
                    return "/";
            case 4:
                    return "  ";
            default:
                    throw std::invalid_argument("The number is invalid");
        }
        
    }
  

    std::string rightArme(int option)
    {
        switch(option)
        {
            case 1:
                    return ">";
            case 2:
                    return "/";
            case 3:
                    return "\\";
            case 4:
                    return "  ";
            default:
                    throw std::invalid_argument("The number is invalid");
        }
        
    }
  
    
    std::string torso(int option)
    {
        switch(option)
        {
            case 1:
                    return " : ";
            case 2:
                    return "] [";
            case 3:
                    return "> <";
            case 4:
                    return "   ";
            default:
                    throw std::invalid_argument("The number is invalid");
          
        }
        
    }
  
    std::string base(int option)
    {
        switch(option)
        {
            case 1:
                    return " : ";
            case 2:
                    return "\" \"";
            case 3:
                    return "___";
            case 4:
                    return "   ";
            default:
                    throw std::invalid_argument("The number is invalid");
        }

        
    }
  


    
}