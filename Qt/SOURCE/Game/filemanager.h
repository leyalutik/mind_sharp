#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <string>
#include <vector>
#include<fstream>
#include "userdata.h" // Не забудьте подключить userdata.h для использования UserData
#include <QWidget>

class FileManager: public QWidget
{

public:
    explicit FileManager(QWidget *parent = nullptr);

    void set_read_file(const std::string& read_file);

    void set_save_file(const std::string& save_file);


    bool read_user_data(std::vector<UserData>& user_data);
    bool read_user_name(std::string& name);

    void save_user_data(const std::vector<UserData>& user_data);
    void save_user_name(const std::string& name);

    bool find_user_date(const std::string user_name,
                                     UserData& user_date);

private:


    std::string user_name = "leya";
    std::string read_data_file = "user_data.txt";
    std::string save_data_file = "user_data.txt";

};


#endif // FILEMANAGER_H

