#include<iostream>
#include<string>
#include <stdlib.h>
#include<time.h>

using namespace std;

void body();

int main(){
	body();
}



	

void body(){

	cout << "Last login: Tue May  3 13:00:34 2022 from 185.88.150.90\n";
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
		}else if( (command == "cd /dev") || (command == "cd /dev/")){
			while(true){
				string dev_command;
				cout << "[root@MyServer]/dev# ";
				getline(cin,dev_command);
				if (dev_command == "pwd"){
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
				getline(cin,bin_command);
				if (bin_command == "pwd"){
					cout << "/bin" << endl;
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
				getline(cin,etc_command);
				if (etc_command == "pwd"){
					cout << "/etc" << endl;
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
				getline(cin,lib_command);
				if (lib_command == "pwd"){
					cout << "/lib" << endl;
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
				if (mnt_command == "pwd"){
					cout << "/mnt" << endl;
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
				getline(cin,opt_command);
				if (opt_command == "pwd"){
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
				getline(cin,tmp_command);
				if (tmp_command == "pwd"){
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
				getline(cin,home_command);
				if (home_command == "pwd"){
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
				getline(cin,lib64_command);
				if (lib64_command == "pwd"){
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
				getline(cin,media_command);
				if (media_command == "pwd"){
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
				getline(cin,sbin_command);
				if (sbin_command == "pwd"){
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
				getline(cin,sys_command);
				if (sys_command == "pwd"){
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
				getline(cin,usr_command);
				if (usr_command == "pwd"){
					cout << "/usr" << endl;
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
				getline(cin,proc_command);
				if (proc_command == "pwd"){
					cout << "/proc" << endl;
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
	}

}
