#pragma once
#include "Book.h"
#include "Audio.h"
class AudioBook :
    public Book, public Audio
{
protected:
    int m_tapes; //1 tape = 600sec
public:
    AudioBook();
    AudioBook(string author, string edition, Date publicationDate, string speaker, int duration, Date recordingDate);

    int getTapes()const;
    void showAudioBook()const;
};

