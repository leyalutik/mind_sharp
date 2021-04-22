
struct User_information{
char operations = '+';
int number_digits_first = 1;                				
int number_digits_second = 1;                				
int number_expressions = 5;					
string User ="The future great mathematician";
string name_of_file;
};
struct Stat_data{
int N_circle = 0;
int N_all_exp = 1;  //(Кол-во прим-)   
int N_correct_exp = 0; //(Кол-во прав.ответов)  
int N_correct_N_all = 1;   
double  t_N = 0;  //Время выполнения цикла вычислений t_N   
double t_N_N_all = 1; //Время выполнения одного примера 
int Complexity = 3; // Сложность (Сложн.add по кол-ву цифр, произв,то умнож на 2)   
};

User_information user_name;
open file user_name;

Main_menu
-------------------------------------------------
>>  Input data

(1)  Let''s start									y/Enter
(2)  No, I want to modify some options				o
(3)  Choose another user  								u
(4)  Statistics											s
(5)  Exit											e/Esc

<< Output_data										

y/Enter  or  o   or   e/Esc
---------------------------------------------------

if( output_data == 'u')

user
-----------------------
a. Add new user           (n)       
b. Choose existing user   (e)

Output data 
------------------------

if(output data == 'n')
"Please, input the name you like using latin letters and press Enter."
-------------------------------------------------  
input  data  string User_name


Создать новый struct User_information{
char operations = '+';
int number_digits_first = 1;                				
int number_digits_second = 1;                				
int number_expressions = 5;					
string User ="User_name";
file "User_name.txt";
}

Создать таблицу с шапкой User_information
открыть новый файл с именем user_name
закрываем предыдцщий файл
Выйти в Main_menu
-------------------------------

if(output data == 'e')
----------------------------
1.User1					
2.User2					
.............. 
----------------------------
---------------------------------------------------------------
Вывести список users  (число - name_user) (к ним привязаны user information)

input data - число
 по нему находим User -> User information -> открываем файл с именем user_name
закрываем предыдцщий файл
 Выйти в Main_menu
---------------------------------------------------------------


if(Output_data == 'o')

Options
--------------------------------------------------
>> Input data   

1. Operations: sum(+) or product(*) or mixed(m)
2. Number of first summand digits  					1/2/3/m(mixed)
3. Number of second summand digits  				1/2/3/m(mixed)
4. Number of expressions							1-100


<< Output_data

1m2131455
--------------------------------------------------

void parse_options( string Input data (from options output data), User information) 
-------------------------------------------------
Разобрать input data внести в User information

Выйти  в Main_menu
-------------------------------------------------


if( output_data == 'y' or Enter)

Start program
-----------------------------------------------------	
Входные данные 
------------------------------------------------------


int N_all from User_information

Функции
Если неправильный ответ, добавляет в вектор  wrong_answer  вектор exp + answer_user  (4 elements)
void add_wrong_answer(vector<int>& wrong_answers, vector<int>& exp, int answer_user);

Генерация примерa с определенной операцией и определ. диапазоном чисел 
input data - user_name
output data в exp (первый операнд, второй операнд, третий элемент - результат) 
void create_exp (User_information& user_name, std::vector<int> &exp); // size of exp = 3

Вывод примера (1+2=)
void print_exp(std::vector<int> &exp)

Пользователь вычисляет.
output data - answer_user
void read_answer_user(int& answer_user);

Программа проверяет.
Сравнивает ответ в exp (exp[2]) и answer_user, 
output data - 1, если равны, 0, если не равны.
bool mind_sharp(std::vector<int> &exp, int& answer_user); // size ofexp = 3	
Выводит сколько правильных.
void print_result(vector<int>& wrong_exp);
Выводит время выполнения всей программы и за один пример  
input data время начала, время окончания цикла
output data  время выполнеия программы
void print_time_result(double time_start, double time_end, double time_program);
Внести данные в таблицу файла user_name из struct Stat_data
void input_stat_data_in_file (string user_name, Stat_data& stat_data);

main block
-----------------------------------------------------
		vector<int> wrong_answers;
		double time_start,time_end;
		int N_correct = 0;

Цикл по N_examples{
		++N_correct;
		vector<int> exp;
		void create_exp (user_name,exp); // size of exp = 3
		void print_exp(exp);
		int answer_user = 0;
		void read_answer_user(answer_user);
		if(mind_sharp(exp,answer_user) == 0){
			add_wrong_answer(wrong_answers, exp, int answer_user);
			--N_correct;	
		}

}

print_result(wrong_exp);
int time_program = 0;
print_time_result(time_start,time_end, time_program);

Внести данные в структуру типа Stat_data stat_data;
input_stat_data_in_file (user_name, stat_data);

------------------------------------------------------
" Would you like to try it again? Y(Enter)/n";

------------------------------------------------------



Выходные данные
-------------------------------------------------
В файл записывается таблица Пользователя
User
№ цикла   N_all(Кол-во прим-)   N-correct(Кол-во прав.ответов)  N_correct/N_all    Время выполнения вычислений t_N   t_N/N_all   Сложность (Сложн.add по кол-ву цифр, произв,то умнож на 2)   
-------------------------------------------------