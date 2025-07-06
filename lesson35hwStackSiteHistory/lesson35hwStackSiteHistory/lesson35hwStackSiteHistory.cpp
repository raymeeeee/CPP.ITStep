#include "WebBrowser.h"

int main()
{
    WebBrowser a("https://en.wikipedia.org");
    a.visit("/Parry_Sound,_Ontario");
    a.visit("/Wildfire_suppression");
    a.visit("/Aerial_firefighting");
    a.visit("/AirTanker_Services");

    a.getURL();

    a.back();
    a.getURL();
    a.back();
    a.getURL();

    a.visit("/England_and_Wales");
    a.getURL();
    a.visit("/United_Kingdom");
    a.getURL();

    a.back();
    a.getURL();
    a.back();
    a.getURL();
    a.back();
    a.getURL();

    a.forward();
    a.getURL();
    a.forward();
    a.getURL();
    a.forward();
    a.getURL();
    a.forward();
    a.getURL();
    a.forward();
    a.getURL();
    
    //по сути сделал так же как и в хроме это работает
    //если посещается новый сайт то стак который отвечает за возврат вперед очищается 
   
}
