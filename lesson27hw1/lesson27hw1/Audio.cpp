#include "Audio.h"

Audio::Audio()
{
    m_speaker = "";
    m_duration = 0;
    m_recordingDate;
}

Audio::Audio(string speaker, int duration, Date recordingDate)
{
    m_speaker = speaker;
    m_duration = duration;
    m_recordingDate = recordingDate;
}

void Audio::setSpeaker(string speaker)
{
    m_speaker = speaker;
}

void Audio::setDuration(int duration)
{
    m_duration = duration;
}

void Audio::setRecordingDate(Date recordingDate)
{
    m_recordingDate = recordingDate;
}

string Audio::getSpeaker() const
{
    return m_speaker;
}

int Audio::getDuration() const
{
    return m_duration;
}

Date Audio::getRecordingDate() const
{
    return m_recordingDate;
}

void Audio::showAudio() const
{
    cout << "Speaker: " << m_speaker << endl;
    cout << "Duration: " << m_duration << "s" << endl;
    cout << "Recording date: " << m_recordingDate << endl;
}
