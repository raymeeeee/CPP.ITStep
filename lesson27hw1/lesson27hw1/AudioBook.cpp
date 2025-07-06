#include "AudioBook.h"

AudioBook::AudioBook()
{
    m_tapes = 0;
}

AudioBook::AudioBook(string author, string edition, Date publicationDate, string speaker, int duration, Date recordingDate) : Book(author, edition, publicationDate), Audio(speaker, duration, recordingDate)
{
    m_tapes = m_duration / 600 + 1; //1 tape = 600sec
}

int AudioBook::getTapes() const
{
    return m_tapes;
}

void AudioBook::showAudioBook() const
{
    this->showBook();
    cout << "=================================" << endl;
    this->showAudio();
    cout << "=================================" << endl;
    cout << "Tapes: " << m_tapes << endl;
 }
