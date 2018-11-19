#pragma once
class cDelay
{
private:
	int fps;

public:
	void delai(unsigned int frameLimit);
	int getFps();

	cDelay();
	~cDelay();
};

