#include<iostream>
#include<string>
#include <stdlib.h>
#include<time.h>
#include<regex>
#include<thread>
#include<fstream>


using namespace std;

void body();

int main(){
	body();
}



	

void body(){

	cout << "Last login: Tue May  3 13:00:34 2022 from 185.88.150.90\n";
	string command;
	ofstream fon;
	while(true){
		cout << "[root@MyServer]/# ";
	
		getline(cin,command);

		if (command == "ls" ){
			fon.open("./log.txt");
			fon << "User Enter ls command in / directory " << endl;
			cout << "\033[;34m/boot	/dev   /bin   /etc   /lib   /mnt   /opt   /tmp\033[0m" << endl;
			cout << "\033[;34m/home	/lib64   /media   /sbin   /sys   /usr   /proc\033[0m" << endl;
		
		}else if (command == "pwd"){
			cout << "/" << endl;
			fon << "User Enter pwd command in / directory" << endl;
		}else if ((command.find("a") != std::string::npos) || (command.find("-") != std::string::npos)){
			fon << " [ Warning ] => User Try to set attributes for command" << endl;
			cout << "\nPermission Denied" << endl;
		}else if ((command == "cd /boot") || (command == "cd /boot/")){
			while(true){
				string boot_command;
				cout << "[root@MyServer]/boot# ";
				fon << "User chnage directory to /boot" << endl;
				getline(cin,boot_command);
				if (boot_command == "pwd"){
					fon << "User Enter pwd command in /boot directory" << endl;
					cout << "/boot" << endl;
				}else if (boot_command == "exit"){
					fon << "user Enter Exit command " << endl;
					exit (1);
				}
				else{
					cout << "command Not Found" << endl;
				}
			}
		}else if( (command == "cd /dev") || (command == "cd /dev/")){
			while(true){
				string dev_command;
				cout << "[root@MyServer]/dev# ";
				fon << "user change directory to /dev " << endl;
				getline(cin,dev_command);
				if (dev_command == "pwd"){
					fon << "User Enter pwd command in /dev directory " << endl;
					cout << "/dev" << endl;
				}else if (dev_command == "exit"){
					exit (1);
				}
				else{
					cout << "command Not Found" << endl;
				}
			}
		}else if( (command == "cd /bin") || (command == "cd /bin/")){
			while(true){
				string bin_command;
				cout << "[root@MyServer]/bin# ";
				fon << "User change directory to /bin " << endl;
				getline(cin,bin_command);
				if (bin_command == "pwd"){
					cout << "/bin" << endl;
					fon << "User Enter pwd command in /bin directory " << endl;
				}else if (bin_command == "exit"){
					exit (1);
				}
				else{
					cout << "command Not Found" << endl;
				}
			}
		}else if( (command == "cd /etc") || (command == "cd /etc/")){
			while(true){
				string etc_command;
				cout << "[root@MyServer]/etc# ";
				fon << " [ Warning ] => User chnage Directory to /etc " << endl;
				getline(cin,etc_command);
				if (etc_command == "pwd"){
					cout << "/etc" << endl;
					fon << "User Enter pwd command in /etc directory " << endl;
				}else if (etc_command == "exit"){
					exit (1);
				}
				else{
					cout << "command Not Found" << endl;
				}
			}
		}else if( (command == "cd /lib") || (command == "cd /lib/")){
			while(true){
				string lib_command;
				cout << "[root@MyServer]/lib# ";
				fon << "User change directory to /lib " << endl;
				getline(cin,lib_command);
				if (lib_command == "pwd"){
					cout << "/lib" << endl;
					fon << "User Enter pwd command in /lib" << endl;
				}else if (lib_command == "exit"){
					exit (1);
				}
				else{
					cout << "command Not Found" << endl;
				}
			}
		}else if( (command == "cd /mnt") || (command == "cd /mnt/")){
			while(true){
				string mnt_command;
				cout << "[root@MyServer]/mnt# ";
				getline(cin,mnt_command);
				fon << "User chnage directory to /mnt " << endl;
				if (mnt_command == "pwd"){
					cout << "/mnt" << endl;
					fon << "User Enter pwd command in /mnt directory" << endl;
				}else if (mnt_command == "exit"){
					exit (1);
				}
				else{
					cout << "command Not Found" << endl;
				}
			}

		}else if( (command == "cd /opt") || (command == "cd /opt/")){
			while(true){
				string opt_command;
				cout << "[root@MyServer]/opt# ";
				fon << " [Warning] => User chnage directory to /opt " << endl;
				getline(cin,opt_command);
				if (opt_command == "pwd"){
					fon << "User Enter pwd command in /opt directory" << endl;
					cout << "/opt" << endl;
				}else if (opt_command == "exit"){
					exit (1);
				}
				else{
					cout << "command Not Found" << endl;
				}
			}
		}else if( (command == "cd /tmp") || (command == "cd /tmp/")){
			while(true){
				string tmp_command;
				cout << "[root@MyServer]/tmp# ";
				fon << "user chnage directory to /tmp directory " << endl;
				getline(cin,tmp_command);
				if (tmp_command == "pwd"){
					fon << "User Enter pwd command in /tmp directory " << endl;
					cout << "/etc" << endl;
				}else if (tmp_command == "exit"){
					exit (1);
				}
				else{
					cout << "command Not Found" << endl;
				}
			}
		}else if( (command == "cd /home") || (command == "cd /home/")){
			while(true){
				string home_command;
				cout << "[root@MyServer]/home# ";
				fon << " [ Warning ] => user chnage directory to /home " << endl;
				getline(cin,home_command);
				if (home_command == "pwd"){
					fon << "User Enter pwd command in /home directory" << endl;
					cout << "/home" << endl;
				}else if (home_command == "exit"){
					exit (1);
				}
				else{
					cout << "command Not Found" << endl;
				}
			}
		}else if( (command == "cd /lib64") || (command == "cd /lib64/")){
			while(true){
				string lib64_command;
				cout << "[root@MyServer]/lib64# ";
				fon << "User change directory to /lib64 directory " << endl;
				getline(cin,lib64_command);
				if (lib64_command == "pwd"){
					fon << "User Enter pwd command in /lib64 directory " << endl;
					cout << "/lib64" << endl;
				}else if (lib64_command == "exit"){
					exit (1);
				}
				else{
					cout << "command Not Found" << endl;
				}
			}
		}else if( (command == "cd /media") || (command == "cd /media/")){
			while(true){
				string media_command;
				cout << "[root@MyServer]/media# ";
				fon << "User chnage directory to /media " << endl;
				getline(cin,media_command);
				if (media_command == "pwd"){
					fon << "user Enter pwd command in /media directory " << endl;
					cout << "/media" << endl;
				}else if (media_command == "exit"){
					exit (1);
				}
				else{
					cout << "command Not Found" << endl;
				}
			}
		}else if( (command == "cd /sbin") || (command == "cd /sbin/")){
			while(true){
				string sbin_command;
				cout << "[root@MyServer]/sbin# ";
				fon << " [ Warning ] => user chnage Directory to /sbin " << endl;
				getline(cin,sbin_command);
				if (sbin_command == "pwd"){
					fon << "User Enter pwd command in /sbin directory " << endl;
					cout << "/sbin" << endl;
				}else if (sbin_command == "exit"){
					exit (1);
				}
				else{
					cout << "command Not Found" << endl;
				}
			}
		}else if( (command == "cd /sys") || (command == "cd /sys/")){
			while(true){
				string sys_command;
				cout << "[root@MyServer]/sys# ";
				fon << "User chnage directory tp /sys " << endl;
				getline(cin,sys_command);
				if (sys_command == "pwd"){
					fon << "user Enter pwd command in /sys directory" << endl;
					cout << "/sys" << endl;
				}else if (sys_command == "exit"){
					exit (1);
				}
				else{
					cout << "command Not Found" << endl;
				}
			}
		}else if( (command == "cd /usr") || (command == "cd /usr/")){
			while(true){
				string usr_command;
				cout << "[root@MyServer]/usr# ";
				fon << "User change directory to /usr " << endl;
				getline(cin,usr_command);
				if (usr_command == "pwd"){
					cout << "/usr" << endl;
					fon << "user Enter pwd command in /usr directory " << endl;
				}else if (usr_command == "exit"){
					exit (1);
				}
				else{
					cout << "command Not Found" << endl;
				}
			}
		}else if( (command == "cd /proc") || (command == "cd /proc/")){
			while(true){
				string proc_command;
				cout << "[root@MyServer]/proc# ";
				fon << "User chaneg Directory to /proc" << endl;
				getline(cin,proc_command);
				if (proc_command == "pwd"){
					cout << "/proc" << endl;
					fon << "User Enter pwd command in /proc directory " << endl;
				}else if (proc_command == "exit"){
					exit (1);
				}
				else{
					cout << "command Not Found" << endl;
				}
			}

		}else if (command == "exit"){
			 exit (1);

		}else{
		cout << "command Not Found " << endl;
		}

		fon.close();
	}

}
