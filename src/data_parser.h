#ifndef DATA_PARSER_H
#define DATA_PARSER_H

#include <string>
#include <nlohmann/json.hpp>

void parse_xml(const std::string& filename);
void save_to_json(const std::string& filename, const nlohmann::json& data);

#endif
