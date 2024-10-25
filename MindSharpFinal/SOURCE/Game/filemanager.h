#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <string>
#include <vector>
#include "userdata.h" // Не забудьте подключить userdata.h для использования UserData

class FileManager {
public:
    static FileManager& get_instance() {
        static FileManager instance;
        return instance;
    }

    void set_read_file(const std::string& read_file) { read_data_file = read_file; }
    void set_save_file(const std::string& save_file) { save_data_file = save_file; }

    void read_user_data(std::vector<UserData>& user_data);
    void save_user_data(const std::vector<UserData>& user_data);
    void read_user_data(std::string& name);

private:
    std::string read_data_file = "user_data.txt";
    std::string save_data_file = "user_data.txt";

    FileManager() = default;
    FileManager(const FileManager&) = delete;
    FileManager& operator=(const FileManager&) = delete;
};

#endif // FILEMANAGER_H

