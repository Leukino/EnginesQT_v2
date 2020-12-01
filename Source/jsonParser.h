#ifndef JSONLOAD_H
#define JSONLOAD_H
#include "Dependencies/jsonCPP/json.hpp"

using json = nlohmann::json;

class JsonStuff {

public:
	void JsonLoad() {};

	json load(const char* path);
	bool save(json file, const char* path);
	std::string jsonToString(json file);
}; 

#endif //TIMER_H