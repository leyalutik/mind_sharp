#include<iostream>
#include<stdio.h>
#include<conio.h>
#include "main_menu_start.h"
//вывод в консоль отображение меню Preface

enum MAIN_MENU_OPTIONS
{
	START = 1,
	STATISTICS = 2,
	OPTIONS = 3,
	SELECT_USERS = 4,
	CHOOSE_LANGUAGES = 5
};


void display_Preface();
void desplay_Preface_OPTIONS();
void display_Main_menu();
void handler_Main_menu_options( const char& option);
void caller_Main_menu_1_START();
void caller_Main_menu_2_STATISTICS();
void caller_Main_menu_3_OPTIONS();
void caller_Main_menu_4_SELECT_USERS();
void caller_Main_menu_5_CHOOSE_LANGUAGES();



int main()// stabs functions
{
	bool current_user_exist = 1; 
	bool current_language_exist = 1;
	if(current_user_exist && current_language_exist)
	{
		display_Main_menu();
		char option;
		option = getchar();
		std::cout << +option << std::endl;
		handler_Main_menu_options(option);
	}

	return 0;

}

void handler_Main_menu_options(const char& option)
{
	switch(option)
	{
		case 'y' :  caller_Main_menu_1_START();
			    break;
		case '1' :  caller_Main_menu_1_START();
			    break;
		case  10 :  caller_Main_menu_1_START();
			    break;
		case 's' : caller_Main_menu_2_STATISTICS();
			   break;
		case '2' : caller_Main_menu_2_STATISTICS();
			   break;
		case 'o' : caller_Main_menu_3_OPTIONS();
			   break;
		case '3' : caller_Main_menu_3_OPTIONS();
			   break;
		case 'u' : caller_Main_menu_4_SELECT_USERS();
			   break;
		case '4' : caller_Main_menu_4_SELECT_USERS();
			   break;
		case 'l' : caller_Main_menu_5_CHOOSE_LANGUAGES();
			   break;
		case '5' : caller_Main_menu_5_CHOOSE_LANGUAGES();
			   break;
		case 'e' : return; //THE END		
		case '6' : return; //THE END		
		case  27 : return; //THE END		
		default :   std::cout << "Unknown symbol.\n";
			    break;

	}
}

void display_Main_menu()
{
	std::cout << "Hello, name_of_user\n\n";

	std::cout << "(1)  Let's start				1/y/Enter\n";
	std::cout << "(2)  Statistics  				2/s\n";
	std::cout << "(3)  Options					3/o\n";
	std::cout << "(4)  Select a user				4/u\n";
	std::cout << "(5)  Choose language				5/l\n";
	std::cout << "(6)  Exit					6/e/Esc\n";	
}
void caller_Main_menu_1_START()
{
	main_function();
	//std::cout << "function 'caller_Main_menu_1_START' is running.\n";
}
void caller_Main_menu_2_STATISTICS()
{
	std::cout << "function 'caller_Main_menu_2_STATISTICS' is running.\n";
}
void caller_Main_menu_3_OPTIONS()
{
	std::cout << "function 'caller_Main_menu_3_OPTIONS' is running.\n";
}
void caller_Main_menu_4_SELECT_USERS()
{
	std::cout << "function 'caller_Main_menu_4_SELECT_USERS' is running.\n";
}
void caller_Main_menu_5_CHOOSE_LANGUAGES()
{
	std::cout << "function 'caller_Main_menu_5_CHOOSE_LANGUAGES' is running.\n";
}
