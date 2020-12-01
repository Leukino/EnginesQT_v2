#include "jsonParser.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
// Documentation here: https://nlohmann.github.io/json/

using json = nlohmann::json;

void writeSomething()
{
	json verycoolsettings;
	unsigned int leetNumber = 1337;
	verycoolsettings["Elite"] = leetNumber;

	bool isLeet = true;
	verycoolsettings["isElite"] = isLeet;

	std::string leetString = "Leet Very Leet!!1";
	verycoolsettings["Description"] = leetString;

	return;
}

std::string JsonStuff::jsonToString(json file) {
	std::string ret = "error returning string in jsontostring!";
	ret = file.dump(4);
	return ret;
}

bool JsonStuff::save(json file, const char* path) {
	bool success = false;
	std::ofstream stream(path, std::ofstream::out);
	stream << std::setw(1) << file << std::endl;
	stream.close();

	return success;
}

json JsonStuff::load(const char* path)
{

	json ret;
	//bool parseInfo = ret.parse(path, nullptr, false);
	std::ifstream fileStream(path, std::ifstream::in);
	ret = json::parse(fileStream);
	fileStream.close();

	return ret;
}