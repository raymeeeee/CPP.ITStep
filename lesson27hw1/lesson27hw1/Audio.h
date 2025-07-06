#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "Date.h"
using namespace std;
class Audio
{
protected:
	string m_speaker;
	int m_duration; //seconds
	Date m_recordingDate;
public:
	Audio();
	Audio(string speaker, int duration, Date recordingDate);

	void setSpeaker(string speaker);
	void setDuration(int duration);
	void setRecordingDate(Date recordingDate);

	string getSpeaker()const;
	int getDuration()const;
	Date getRecordingDate()const;
	void showAudio()const;
};

