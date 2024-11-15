#ifndef DATA_PARSER_H
#define DATA_PARSER_H

#include <string>

void parse_xml(const std::string& filename);
void save_to_json(const std::string& filename, const std::string& key, const std::string& value);

#endif
