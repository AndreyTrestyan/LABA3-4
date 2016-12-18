#pragma once
class Sea
{
public:
	void setName(char *name);
	char* getName();
	void setSalt(int salt);
	int getSalt();
	void setDeep(int deep);
	int getDeep();
	Sea();
	~Sea();

	class Fish
	{
	public:
		void GetAny(Sea &obj);
		int numberof();
	};
	void GetNested(Fish &obj);
private:
	char *name_; // имя
	int deep_; // глубина
	int salt_; // солёность
};