#include "BusSchedule.h"

BusSchedule::BusSchedule(vector<string> stations, Time start, Time end, int duration, int relax)
{
	m_stations = stations;
	m_start = start;
	m_end = end;
	m_duration = duration;
	m_relax = relax;

}

void BusSchedule::addStation(int number, string name)
{
	m_stations.insert(m_stations.begin() + number-1, name);
}

void BusSchedule::delStation(int number)
{
	m_stations.erase(m_stations.begin() + number-1);
}

Time BusSchedule::getStart() const
{
	return m_start;
}

Time BusSchedule::getEnd() const
{
	return  m_end;
}

int BusSchedule::getDuration() const
{
	return m_duration;
}

int BusSchedule::getRelax() const
{
	return m_relax;
}

void BusSchedule::setStart(Time start)
{
	if (start.valid()) {
		m_start = start;
	}
}

void BusSchedule::setEnd(Time end)
{
	if (end.valid()) {
		m_end = end;
	}
}

void BusSchedule::setDuration(int duration)
{
	if (duration >= 10) {
		m_duration = duration;
	}
}

void BusSchedule::setRelax(int relax)
{
	if (relax >= 10) {
		m_relax = relax;
	}
}

void BusSchedule::showInfo() const
{
	for (auto i : m_stations)
	{
		cout << i << endl;
	}cout << endl;

	cout << "Start: " << m_start << endl;
	cout << "End: " << m_end << endl;
	cout << "Duration:" << m_duration << endl;
	cout << "Relax:" << m_relax << endl;
	
	
		
}

void BusSchedule::printShedule() const
{
	for (int i = 0; i < m_stations.size() - 1; i++)
	{
		if (m_start + float(m_duration * (i + 1)) + float(m_relax * i) < m_end) {
			/*cout << (m_start + float(m_duration * (i + 1)) + float(m_relax * i) < m_end) << endl << m_start + float(m_duration * (i + 1)) + float(m_relax * i) << " <" << m_end << endl;*/

			cout << "\t#" << i + 1 << "\t\n" << m_stations[i] << "\t\t" << "Departure: " << m_start + float(m_duration * i) + float(m_relax * i) << endl;

			if (i < m_stations.size() - 1) {
				cout << "\tto\n" << m_stations[i + 1] << "\t\t" << "Arrival: " << m_start + m_duration * float(i + 1) + float(m_relax * i) << endl;
			}
			/*else {
				cout << "\tto\n" << "undefined" << endl;
			}*/
			cout << endl << endl;
		}
		else {
			break;
		}
	}
}
