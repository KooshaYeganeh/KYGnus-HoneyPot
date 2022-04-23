#include<iostream>
#include<string>
#include <stdlib.h>


using namespace std;


int main(){
	
	string command;
	while(true){
		cout << "[root@MyServer]/# ";
	
		getline(cin,command);

		if (command == "ls" ){
			cout << "\033[;34m/boot	/dev   /bin   /etc   /lib   /mnt   /opt   /tmp\033[0m" << endl;
			cout << "\033[;34m/home	/lib64   /media   /sbin   /sys   /usr   /proc\033[0m" << endl;
		
		}else if (command == "pwd"){
			cout << "/" << endl;
		}else if ((command.find("a") != std::string::npos) || (command.find("-") != std::string::npos)){
			cout << "\nPermission Denied" << endl;
		}else if ((command == "cd /boot") || (command == "cd /boot/")){
			while(true){
				string boot_command;
				cout << "[root@MyServer]/boot# ";
				getline(cin,boot_command);
				if (boot_command == "pwd"){
					cout << "/boot" << endl;
				}else if (boot_command == "exit"){
					exit (1);
				}
				else{
					cout << "command Not Found" << endl;
				}
			}
		}
		else if (command == "exit"){
			 exit (1);

		}else{
		cout << "command Not Found " << endl;
		}
	}
	return 0;
}



