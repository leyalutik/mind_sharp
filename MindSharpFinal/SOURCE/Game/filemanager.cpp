#include "filemanager.h"
#include <fstream>
#include <sstream>
#include <iostream>

void FileManager::read_user_data(std::vector<UserData>& user_data) {
    std::ifstream ifs(read_data_file);
    if (!ifs.is_open()) {
        std::cerr << "File does not exist.\n";
        return;
    }

    std::string line;
    while (std::getline(ifs, line)) {
        UserData data;
        std::stringstream ss(line);
        int operation;
        if (ss >> data.name >> data.total_examples >> operation
            >> data.first_member_number_digits >> data.second_member_number_digits
            >> data.wrong_answers >> data.best_time) {
            data.operation_sign = static_cast<OPERATION_SIGN>(operation);
            user_data.push_back(data);
        }
    }
}

    void FileManager::read_user_data(std::string& name)
    {
		std::ifstream ifs(read_data_file);
  8     if (!ifs.is_open()) {
  9         std::cerr << "File does not exist.\n";
 10         return;
 11     }
 	ifs >> name;

    }
void FileManager::save_user_data(const std::vector<UserData>& user_data) {
    std::ofstream ofs(save_data_file);
    if (!ofs.is_open()) {
        std::cerr << "Cannot open file for writing.\n";
        return;
    }

    for (const auto& data : user_data) {
        ofs << data.name << " " << data.total_examples << " "
            << static_cast<int>(data.operation_sign) << " "
            << data.first_member_number_digits << " "
            << data.second_member_number_digits << " "
            << data.wrong_answers << " " << data.best_time << "\n";
    }
}

