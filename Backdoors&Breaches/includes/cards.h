#pragma once

#include <vector>
#include <string>

class card {
protected:
	std::string name;
	std::string description;
};

class attackCard : public card {
private:
	std::vector<std::string> detections;
	std::vector<std::string> tools;

public:
	attackCard(std::string _name, std::string _description);
	void addDetection(std::string detection);
	void addTool(std::string tool);
	void print() const;
};

class procedureCard : public card {
private:
	std::vector<std::string> tools;

public: 
	procedureCard(std::string _name, std::string _description);
	void addTool(std::string tool);
	void print() const;
};

class injectCard : public card {
private:
	std::string notes;

public:
	injectCard(std::string _name, std::string _description, std::string _notes);
	void print() const;
};