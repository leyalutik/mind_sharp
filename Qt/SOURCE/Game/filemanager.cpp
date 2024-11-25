#include "filemanager.h"
#include <fstream>
#include <sstream>
#include <iostream>


FileManager::FileManager(QWidget* parent) :
    QWidget(parent) {}

bool FileManager::find_user_date(const std::string user_name,
                                 UserData& user_date)
{
    std::ifstream ifs(read_data_file.c_str());

    if (!ifs.is_open())
    {
        std::cerr << "File" << read_data_file << " does not exist.\n";
        UserData d;
        user_date.set(d);
        return false;
    }

    std::string line;
    while (std::getline(ifs, line))
    {
        UserData data;
        std::stringstream ss(line);

        if(ss >> data.name)
        {
            if(data.name == user_name)
            {
            int operation;

            ss >> data.total_examples >> operation;
            ss >> data.first_member_number_digits;
            ss >> data.second_member_number_digits;
            ss >> data.wrong_answers >> data.best_time;

            data.operation_sign = static_cast<OPERATION_SIGN>(operation);
            return true;
            }
        }
        else
        {
            std::cerr << "Error parsing line: " << line << std::endl; // Вывод ошибки парсинга
            return false;
        }
    }
    return false;
}



bool FileManager::read_user_data(std::vector<UserData>& user_data)
{

    std::ifstream ifs(read_data_file.c_str());

    if (!ifs.is_open()) {
        std::cerr << "File" << read_data_file << " does not exist.\n";

        return false;
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
        else {
            std::cerr << "Error parsing line: " << line << std::endl; // Вывод ошибки парсинга
            return false;
        }

    }
    return true;
}

    bool FileManager::read_user_name(std::string& name)
    {
        std::ifstream ifs(read_data_file.c_str());
       if (!ifs.is_open())
        {
          std::cerr << "File" << read_data_file << " does not exist.\n";

        return false;
      }

    ifs >> name;
      return true;
    }
    void FileManager::set_read_file(const std::string& read_file)
    {
    read_data_file = read_file;
    }
    void FileManager::set_save_file(const std::string& save_file)
    { save_data_file = save_file; }



    void FileManager::save_user_data(const std::vector<UserData>& user_data) {
    std::ofstream ofs(save_data_file.c_str());
    if (!ofs.is_open()) {
        std::cerr << "Cannot open file" << save_data_file << " for writing.\n";
        return;
    }

    for (const auto& data : user_data) {
        ofs << data.name << " "
            << data.total_examples << " "
            << static_cast<int>(data.operation_sign) << " "
            << data.first_member_number_digits << " "
            << data.second_member_number_digits << " "
            << data.wrong_answers << " "
            << data.best_time << "\n";
    }
}

void FileManager::save_user_name(const std::string& name)
{
    std::ofstream ofs(save_data_file.c_str());
    if (!ofs.is_open()) {
        std::cerr << "Cannot open file" << save_data_file << " for writing.\n";
        return;
    }

    ofs << name;

}

