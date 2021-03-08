#include "snowman.hpp"
#include <iostream> //std
#include <stdexcept>
using namespace std;
using namespace ariel;

namespace ariel
{
    string snowman(long sm)
    {
        const int min = 11111111;
        const int max = 44444444;
        if (sm > max || sm < min)
        {
            throw invalid_argument("number inserted invalid");
        }
        const int ten = 10;

        string snowman = ".";
        string h = ".";
        string n = ".";
        string l = ".";
        string r = ".";
        string x = ".";
        string y = ".";
        string t = ".";
        string b = ".";

        const int inputsize = 8;
        const int five = 5;
        const int six = 6;
        const int seven = 7;
        const int eight = 8;


        for (int i = 1; i <= inputsize; i++)
        {
            int temp = (int) sm % ten;
            sm = sm / ten;
            switch (i)
            {
            case eight:
                h = hat(temp);
                break;
            case seven:
                n = nose(temp);
                break;
            case six:
                l = Leye(temp);
                break;
            case five:
                r = Reye(temp);
                break;
            case 4:
                x = Lhand(temp);
                break;
            case 3:
                y = Rhand(temp);
                break;
            case 2:
                t = torso(temp);
                break;
            case 1:
                b = base(temp);
                break;
            default:
                throw invalid_argument("number inserted invalid");
            }
        }

        //first and second level
        snowman = h;

        //third level
        if (x == "\\")
        {
            snowman += "\\";
            x = " ";
        }
        else
        {
            snowman += " ";
        }
        snowman += ("(" + l + n + r + ")");

        if (y == "/")
        {
            snowman += "/\n";
            y = " ";
        }
        else
        {
            snowman += " \n";
        }

        //forth level
        snowman += (x + t + y + "\n");

        //fifth level
        snowman += b;

        return snowman;
    }

    string hat(int h)
    {
        switch (h)
        {
        case 1:
            return "       \n _===_ \n";
        case 2:
            return "  ___  \n ..... \n";
        case 3:
            return "   _   \n  /_\\  \n";
        case 4:
            return "  ___  \n (_*_) \n";
        default:
            throw invalid_argument("number inserted invalid");
        }
    }
    string nose(int n)
    {
        switch (n)
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
            throw invalid_argument("number inserted invalid");
        }
    }
    string Leye(int l)
    {
        switch (l)
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
            throw invalid_argument("number inserted invalid");
        }
    }
    string Reye(int r)
    {
        switch (r)
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
            throw invalid_argument("number inserted invalid");
        }
    }

    string Lhand(int x)
    {
        switch (x)
        {
        case 1:
            return "<";
        case 2:
            return "\\";
        case 3:
            return "/";
        case 4:
            return " ";
        default:
            throw invalid_argument("number inserted invalid");
        }
    }
    string Rhand(int y)
    {
        switch (y)
        {
        case 1:
            return ">";
        case 2:
            return "/";
        case 3:
            return "\\";
        case 4:
            return " ";
        default:
            throw invalid_argument("number inserted invalid");
        }
    }
    string torso(int t)
    {
        switch (t)
        {
        case 1:
            return "( : )";
        case 2:
            return "(] [)";
        case 3:
            return "(> <)";
        case 4:
            return "(   )";
        default:
            throw invalid_argument("number inserted invalid");
        }
    }
    string base(int b)
    {
        switch (b)
        {
        case 1:
            return " ( : ) \n";
        case 2:
            return " (\" \") \n";
        case 3:
            return " (___) \n";
        case 4:
            return " (   ) \n";
        default:
            throw invalid_argument("number inserted invalid");
        }
    }
}