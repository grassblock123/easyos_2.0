/*

[C] : Copyright by Create.Inc (2023) & Grassinternet.Inc [2022 - 2040]

Created by {Zhujunjie_Official , Xbodw , 不知道从哪里来的Win7 , <只因鱼溺水> , 姜哥说电脑 , grass_block}

Devloper mode (Dairy : Open)


---------------------------------------About The Opreacting System-------------------------------------------

	Model : Electicity Product (EP)		Model number : Ep-vpc-r-0020T		Useage : 0.000(≈0.00021)V/s
	Memoery Used : < 128MB (Most 256MB)		中国电器能量标识：低			Disk Usedage : <= 10M

-------------------------------------------------------------------------------------------------------------

Based on "easycore" [Product : beta 1 bta-0010]

EFI Start up

Do not copy or change !

*/

//C++ head librarys
#include <string>
#include <vector>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <windows.h>
using namespace std;


//All varibles
	string product_key = "ponduacretctedbnyirasnertcareietdngsicn";
	string task_key = "Ta#skf&Ini^sI??/ed!";
	string Tubor_key = "verywe11!easy0s2.o";
	string pin = "p@22w0r01";
	
	int power = 0;
	int tubor = 0;
	int bootp = 0;
	int fastmode = 0;
	int turnto = 1;
	int tubdev = 0;
	int screenon = 0;
	
	int maxp = 3000;
	int mem = 5000;
	int core = 5;
	int tread = 12;
	
	string tmp;
	
	char password;
	string say = "Who is live in a pineapple under the sea?";
	string way = "Covering//Desktop//";
	string message;
	int refind = 0;
	int sayre = 0;
	int tmp1;
	
	string dic[20] = {"help","main","list","task","regedit","create","open","edit","device","command","run","osver","change","up","down"};
	string mainex;
	string virdic[20] = {"Covering 1.0","Applications","easycore bta-0010","system.conf","main.contr","virtual.dir","devcice.vir"};
	string covering_1[10] = {"control.cmf","maining.ma","tecus.ted","readme.md","lencense.txt"};
	string Applications[20] = {"help.etf","main.etf","list.etf","task.etf","regedit.etf","file.etf","open.etf","edit.etf","device.etf","command.etf","run.etf","osver.etf","change.etf","upvar.etf","downvar.etf"};
	string corelist[10] = {"pup.cmf","boot.cmf","har.cmf","sc.fc","mscp.sd","dia.med"};
	int mem_used = 0;
	int process_used = 0;
	string var_name[10] = {"Refinded mode","Hardware Tubor","Local media","Internet soft","EasyCore","Hardware refined"};
	string satuation[10] = {"false","false","false","false","true","true"};
	int var[10] = {0,0,0,0,1,1};
	int dir_now = 0;
	string name;
	string type;
	string desktop[100];
	int count_d = 0;
	string device_list[20] = {"Processor","Stroage Disk","SD Control","Memorys","Display","Graphics card","Virtual devices"};
	string dev_name[20] = {"Create(R) Virtual Processor @0.3Ghz","Grassinternet(R) Virtual fast writing disk","ArmIC(R) Stroage full control card & applications","Create(R) Virtual Memory","Grassdevices(R) Surface Display","Create(R) Virtual Graphics 1TX","Create(R) Virtual create & control applications"};
	string dev_var[20] = {"2 Cores 4 Treads","100MB / s","One device is controling...","2MB 1024MB / s","52 * 29 pixel","@1.0Ghz 200MB","Product : 0020"};
	
	
//easycore beta bta-0010
int pup(){
	power = 1;
	if(Tubor_key.substr(5,6) == "1"){
		tubor = 0;
	}else if(Tubor_key.substr(5,6) == "2"){
		cout << "Tubor error!\n\n";
		return 0;
	}else if(Tubor_key.substr(5,6) == pin.substr(6,7)){
		cout << "Tubor is opening!\n\n";
		return 0;
	}
	return 1;
}

int boot(){
	if(power != 1){
		cout << "No powering!\n\n";
		return 0;
	}else if(product_key != "ponduacretctedbnyirasnertcareietdngsicn"){
		cout << "Product key error!\nCkeck who product your devices!\nMaybe you bought not right devices!\n\n";
		return 0;
	}else if(task_key != "Ta#skf&Ini^sI??/ed!"){
		cout << "No enough authority to do tasks\nPlease concact your devices admin or company engineer!\n\n";
		return 0;
	}else if(Tubor_key != "verywe11!easy0s2.o"){
		cout << "Tubor error!\n\nPlease close tubor or the system is hacked!\n\n";
		return 0;
	}else if(pin != "p@22w0r01"){
		cout << "pin error!\n\nplease buy a right pin password!\n\n";
		return 0;
	}else{
		bootp = 1;
		return 1;
	}
}

int bootic(){
	if(bootp == 1){
		if(turnto == 1){
			maxp = 1024;
			mem = 2048;
			core = 2;
			tread = 4;
		}else if(turnto == 2){
			cout << "You opened the 'Tubor hardware' choosen , do you want to make the processors and memorys to be the most powerful?\n";
			cout << "[If you don't kown what are you doing , input 'no']\n\n";
			cout << "-----> ";
			cin >> tmp;
			if(tmp == "yes"){
				tubdev = 1;
				return 0;
			}else{
				maxp = 1024;
				mem = 2048;
				core = 2;
				tread = 4;
			}
		}
	}
	return 1;
}

int harc(){
	if(maxp >= 3100){
		cout << "Processor clock time too much!\n\n";
		return 0;
	}else if(maxp >= 5100 && tubdev == 1){
		cout << "Processor clock time too much!\nPlease make the clock time be smaller...\n\n";
		return 0;
	}else if(mem >= 5100){
		cout << "Memory write time too much!\n\n";
		return 0;
	}else if(mem >= 5100 && tubdev == 1){
		cout << "Memory write time too much!\nPlease make the memory write time be smaller...\n\n";
		return 0;
	}else if(core >= 5){
		cout << "Processor core number error!\n\n";
		return 0;
	}else if(core >= 5 && tubdev == 1){
		cout << "Processor core number error!\nPlease make the processor core number be smaller...\n\n";
		return 0;
	}else if(tread >= 12){
		cout << "Processor tread error!\n\n";
		return 0;
	}else if(tread >= 12 && tubdev == 1){
		cout << "Processor tread error!\nPlease make the processor tread be smaller...\n\n";
		return 0;
	}else{
		screenon = 1;
		return 1;
	}
	
}

int screen(){
	if(screenon == 0){
		cout << "Sreen error!";
		for(int i = 0; i <= 52; i++){
			for(int j = 0; j <= 29; j++){
				cout << "■";
			}
		}
		cout << "Can't reset the screen!   : ( ERROR!";
		return 0;
	}else{
		return 1;
	}
}

int EFI(){
	string loc = "//Covering 1.0//corefuntion//efi";
	cout << "____________________________________________________________________________________\n\n" << "EasyOS Hurray!\nA funny thing : " << say << "\n___________________________________________________________________________________\n\n\n\n";
	Sleep(500);
	Sleep(500);
}

int coremgr(){
	if(pup()){
		if(boot()){
			if(bootic()){
				if(harc()){
					if(screen()){
						EFI();
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int refindm(){
	cout << "------------------------------------------------------------\n";
	cout << "Refinded mode (Stuff only)\n\n\n";
	cout << "The System Values:\n";
	cout << "product_key : " << product_key << endl;
	cout << "task_key : " << task_key << endl;
	cout << "Tubor_key : " << Tubor_key << endl;
	cout << "Pin : " << pin << endl << endl << endl;
	cout << "The hardware control\n";
	cout << "Memory write time : " << mem << endl;
	cout << "Processor clock time : " << maxp << endl;
	cout << "Processor used core : " << core << endl;
	cout << "Tubor : " << tubor << endl;
	cout << "Processor Temprature : 20 C\n\n";
	cout << "Powerup\n";
	cout << "Power : " << power << endl;
	cout << "Screenon : " << screenon << endl << endl;
	cout << "Based on easycore bta-0010\n";
	cout << "Created by grassBIOS corporation\n";
	cout << "------------------------------------------------------------\n";
	while(1){
		cin >> message;
		if(message == "exit"){
			refind = 0;
			sayre = 0;
			return 0;
		}else{
			cout << "Not found\n";
			continue;
		}
	}
}



//all applicates
int help(){
	//string dic[20] = {"help","main","list","task","regedit","create","open","edit","device","command","run","osver","change","up","down"};
	cout << endl << "name" << "					" << "mean" << "					" << "size" << endl;
	cout << "Help" << "				" << "To see what applications in the system" << "			" << "1k\n";
	cout << "Main" << "				" << "To see how to use the application that you type" << "			" << "1k\n";
	cout << "List" << "				" << "To list the files in the local virtual disk" << "			" << "1k\n";
	cout << "Task" << "				" << "To see what task is running" << "			" << "1k\n";
	cout << "Regedit" << "				" << "To see and change the varible of system" << "			" << "1k\n";
	cout << "Create" << "				" << "To create a new file" << "			" << "1k\n";
	cout << "Open" << "				" << "To open the file" << "			" << "1k\n";
	cout << "Edit" << "			" << "To edit file" << "			" << "1k\n";
	cout << "Device" << "				" << "To see the devices" << "			" << "1k\n";
	cout << "Command" << "				" << "The terminal that you can run the commands" << "			" << "1k\n";
	cout << "Run" << "				" << "Run the file you want" << "			" << "1k\n";
	cout << "OSver" << "				" << "To see the OS build and version" << "			" << "1k\n\n";
}

int mainsys(){
	cin >> mainex;
	if(mainex == "main"){
		cout << "\nName : main\nHow to input : main + (the name of application)\nWhat : To see how to use the application or command\n\n";
	}else if(mainex == "help"){
		cout << "\nName : help\nHow to input : help\nWhat : To see what applications in the system\n\n";
	}else if(mainex == "list"){
		cout << "\nName : list\nHow to input : list\nWhat : To see the files in the local virtual disk\n\n";
	}else if(mainex == "task"){
		cout << "\nName : task\nHow to input : task\nWhat : See the processor and memory used\n\n";
	}else if(mainex == "regedit"){
		cout << "\nName : regedit\nHow to input : regedit\nWhat : To see and change the varible value of system control\n\n";
	}else if(mainex == "create"){
		cout << "\nName : create\nHow to input : create\nWhat : To create a new file in local virtual disk\n\n";
	}else if(mainex == "open"){
		cout << "\nName : open\nHow to input : open + (file name)\nWhat : To see the files\n\n";
	}else if(mainex == "edit"){
		cout << "\nName : edit\nHow to input : edit + (file name)\nWhat : To edit files\n\n";
	}else if(mainex == "device"){
		cout << "\nName : device\nHow to input : device\nWhat : To see the devices of computer\n\n";
	}else if(mainex == "osver"){
		cout << "\nName : OSver\nHow to input : osver\nWhat : To see the build or vision of OS\n\n";
	}else if(mainex == "run"){
		cout << "\nName : run\nHow to input : run\nWhat : Run the file or applications\n\n";
	}else if(mainex == "command"){
		cout << "\nName : command\nHow to input : command\nWhat : A terminal that you can input command to control\n\n";
	}else{
		cout << "\nNot clear!\n\n";
	}
	return 0;
}

int list(){
	cout << "\nThe file in the local virtual disk : \n\n";
	for(int i = 0; i < 7; i++){
		cout << virdic[i] << endl;
	}
	cout << endl;
	return 0;
}

int task(){
	cout << "\n\nProcessor used : [";
	for(int i = 0; i <= process_used / 10; i++){
		cout << "=";
	}
	for(int i = 0; i <= 10 - (process_used / 10); i++){
		cout << " ";
	}
	cout << "]		" << process_used << "%" << endl;
	cout << "Memoroy used : [";
	for(int i = 0; i <= mem_used / 204.8; i++){
		cout << "=";
	}
	for(int i = 0; i <= 10 - (mem_used / 204.8); i++){
		cout << " ";
	}
	printf("]		%.2lfMB\n\n",mem_used / 2048.0);
	cout << "Processcor : Create(R) Virtual processcor @0.3Ghz\n[" << core << " cores   " << tread << " treads]\n";
	cout << "Memory : Create(R) Virtual memory\n[" << mem / 1024 << " MB]\n\n\n";
}

int regedit(){
	dir_now = 0;
	while(1){
		cout << "\nRegedit UI : \n\n";
		cout << "Control name : " << "		" << "Satuation : " << "		" << "Value : \n";
		for(int i = 0; i < 5; i++){
			cout << var_name[i] << "		" << satuation[i] << "			" << var[i] << endl;
		}
		cout << var_name[5] << "	" << satuation[5] << "			" << var[5] << endl;
		cout << "\nInput 'up' or 'down to change the id direct\n[Also use 'change' to change the value of the varible]\n[Input 'exit' to exit]\n[Input 'refresh' to refresh]\n";
		while(1){
			cout << "\nNow direct of id : " << dir_now + 1 << endl << "id name : " << var_name[dir_now] << "\nid satuation : " << satuation[dir_now] << "\nid value : " << var[dir_now] << "\n\n";
			cin >> message;
			if(message == "up"){
				if(dir_now + 1 <= 5){
					dir_now += 1;
					continue;
				}else{
					dir_now = 0;
					continue;
				}
			}else if(message == "down"){
				if(dir_now - 1 >= 0){
					dir_now -= 1;
					continue;
				}else{
					dir_now = 5;
					continue;
				}
			}else if(message == "change"){
				cout << "\nWhat value do you want to change?\n";
				cout << "Admin input /// ";
				cin >> tmp1;
				var[dir_now] = tmp1;
				if(tmp1){
					satuation[dir_now] = "true";
				}else{
					satuation[dir_now] = "false";
				}
				cout << "\n\nFinish!\n\n";
				continue;
			}else if(message == "refresh"){
				break;
			}else if(message == "exit"){
				cout << endl;
				return 0;
			}else{
				cout << "\nNot clear!\n";
			}
		}
	}
	return 0;
}

int create(){
	cout << "\nWhat is the new file name ?\n\n";
	cout << "New # name <<< ";
	cin >> name;
	cout << "\nWhat is the new file type ?\n\n";
	cout << "New # type <<< ";
	cin >> type;
	desktop[count_d] = name;
	count_d ++;
	desktop[count_d] = type;
	count_d ++;
	desktop[count_d] = "Empty!";
	count_d ++;
	cout << "\nFisish!\n\n";
	return 0;
}

int open(){
	cin >> message;
	for(int i = 0; i <= 100; i++){
		if(message == desktop[i] && desktop[i + 1] == "txt"){
			cout << endl << desktop[i] << endl;
			cout << desktop[i + 2] << endl << endl;
			return 0;
		}else if(message == desktop[i] && desktop[i + 1] != "txt"){
			cout << "\nCannot open this file!\n[Cause of the file type]\n\n";
			return 0;
		}else{
			cout << "\nFile not found!\nPlease check do you create that!\n\n";
			return 0;
		}
	}
	return 0;
}

int edit(){
	cin >> message;
	for(int i = 0; i <= 100; i+=2){
		if(message == desktop[i] && desktop[i + 1] == "txt"){
			cout << endl << desktop[i] << " *edit\n\n";
			if(desktop[i + 2] == "Empty!"){
				cin >> desktop[i + 2];
				cout << "\nFinish!\n\n";
			}else{
				cout << desktop[i + 2];
				cin >> message;
				desktop[i + 2].append(message);
				cout << "\nFinish!\n\n"; 
			}
			return 0;
		}else if(message == desktop[i] && desktop[i + 1] != "txt"){
			cout << "\nCannot edit this file!\n[Cause of the file type]\n\n";
			return 0;
		}else{
			cout << "\nFile not found!\nPlease check do you create that!\n\n";
			return 0;
		}
	}
	return 0;
}

int device(){
	cout << "\n\nDevices control UI : \n\n";
	cout << "Virtual System\n|\n"; 
	for(int i = 0; i < 7; i++){
		cout << "|__ "<< device_list[i] << endl << "|   |__ " << dev_name[i] << " <-----> " << dev_var[i] << "\n";
		cout << "|        |__ " << "Static : Running!\n|\n";
	}
	cout << "\n\n";
	return 0;
}

int osver(){
	cout << "\n------------------------------------------------------------\n";
	cout << "EasyOS 2.0!\n\n";
	cout << "Build : OS build 2\n";
	cout << "Based on easycore [Product : beta bta-0010]\n\n";
	cout << "Created by Zhujunjie_Official , Xbodw , 不知道从哪里来的Win7 , <只因鱼溺水> , 姜哥说电脑 , grass_block\n";
	cout << "Designed by Create.Inc & Grassinternet.Inc in China\n";
	cout << "Copyright (C) by Create.Inc & Grassinternet.Inc\n\n";
	cout << "Opened on github!\n[website : github.com/grass123		GNU Genernal Public Lecense 2.0]\n";
	cout << "\nOthers : github.com/xbodw	github.com/zhujunjie_offical\n";
	cout << "------------------------------------------------------------\n\n";
}

int run(){
	cin >> message;
	if(message == "help"){
		help();
		process_used += 3;
		mem_used += 20;
	}else if(message == "main"){
		mainsys();
		process_used += 4;
		mem_used += 13;
	}else if(message == "list"){
		list();
		process_used += 7;
		mem_used += 50;
	}else if(message == "task"){
		process_used += 6;
		mem_used += 45;
		task();
	}else if(message == "regedit"){
		regedit();
		process_used += 10;
		mem_used += 67;
	}else if(message == "create"){
		create();
		process_used += 5;
		mem_used += 50;
	}else if(message == "open"){
		open();
		process_used += 5;
		mem_used += 50;
	}else if(message == "edit"){
		edit();
		process_used += 5;
		mem_used += 50;
	}else if(message == "osver"){
		osver();
		process_used += 10;
		mem_used += 67;
	}else if(message == "device"){
		device();
		process_used += 10;
		mem_used += 67;
	}else{
		cout << "\nNot clear!\n\n";
		process_used += 20;
		mem_used += 70;
	}
	return 0;
}

int command(){
	while(1){
		cout << "\n@ manager #64---> ";
		cin >> message;
		if(message == "exit"){
			cout << "\n";
			return 0;
		}else if(message == "help"){
			help();
			process_used += 3;
			mem_used += 20;
			continue;
		}else if(message == "main"){
			mainsys();
			process_used += 4;
			mem_used += 13;
			continue;
		}else if(message == "list"){
			list();
			process_used += 7;
			mem_used += 50;
			continue;
		}else if(message == "task"){
			process_used += 6;
			mem_used += 45;
			task();
			continue;
		}else if(message == "regedit"){
			regedit();
			process_used += 10;
			mem_used += 67;
			continue;
		}else if(message == "create"){
			create();
			process_used += 5;
			mem_used += 50;
			continue;
		}else if(message == "open"){
			open();
			process_used += 5;
			mem_used += 50;
			continue;
		}else if(message == "edit"){
			edit();
			process_used += 5;
			mem_used += 50;
			continue;
		}else if(message == "osver"){
			osver();
			process_used += 10;
			mem_used += 67;
			continue;
		}else if(message == "device"){
			device();
			process_used += 10;
			mem_used += 67;
			continue;
		}else{
			cout << "\n '" << message << "' was not decleared!\n\n";
			process_used += 20;
			mem_used += 70;
			continue;
		}
	}
	return 0;
}


//system applications and services
int clock_clr(){
	if(process_used >= 90){
		process_used /= 3;
	}
	return 0;
}

int mem_clr(){
	if(mem_used >= 2040){
		mem_used /= 20;
	}
	return 0;
}

int login(){
	cout << "Welcome to EasyOS!\nPlease input your password['F' or 'f']\n\n";
	cout << "System #64 -----> ";
	while(1){
		cin >> password;
		if(password == 'f' || password == 'F'){
			cout << "\n\nWelcome! @Manager!\nPreparing service and applications...\n\n\n";
			Sleep(500);
			break;
		}else{
			cout << "\n\nOh no! \n\nYour Password is worng,please try again!\n\n";
			cout << "Stanger* -----> ";
			continue;
		}
	}
	return 0;
}

int manager(){
	cout << "input commands or strings to control the system\n[Input 'help' for help]\n\n";
	while(1){
		cout << way << "@ manager #64---> ";
		cin >> message;
		clock_clr();
		mem_clr();
		if(message == "shut_down"){ 
			cout << "\nShutting down...\n\n";
			process_used = 0;
			mem_used = 0;
			Sleep(500);
			return 2;
		}else if(message == "sleep"){
			cout << "\nSleeping...\n[Input anything to desleep]\n\n";
			process_used = 10;
			mem_used = 180;
			cin >> tmp1;
			continue;
		}else if(message == "restart"){
			cout << "\nRestaring...\n\n\n\n";
			process_used = 50;
			mem_used = 456;
			Sleep(500);
			return 0;
		}else if(message == "refind"){
			cout << "\nInto refinded mode...\n\n\n\n";
			process_used = 10;
			mem_used = 170;
			sayre = 1;
			refind = 1;
			Sleep(700);
			return 1;
		}else if(message == "help"){
			help();
			process_used += 3;
			mem_used += 20;
			continue;
		}else if(message == "main"){
			mainsys();
			process_used += 4;
			mem_used += 13;
			continue;
		}else if(message == "list"){
			list();
			process_used += 7;
			mem_used += 50;
			continue;
		}else if(message == "task"){
			process_used += 6;
			mem_used += 45;
			task();
			continue;
		}else if(message == "regedit"){
			regedit();
			process_used += 10;
			mem_used += 67;
			continue;
		}else if(message == "create"){
			create();
			process_used += 5;
			mem_used += 50;
			continue;
		}else if(message == "open"){
			open();
			process_used += 5;
			mem_used += 50;
			continue;
		}else if(message == "edit"){
			edit();
			process_used += 5;
			mem_used += 50;
			continue;
		}else if(message == "osver"){
			osver();
			process_used += 10;
			mem_used += 67;
			continue;
		}else if(message == "device"){
			device();
			process_used += 10;
			mem_used += 67;
			continue;
		}else if(message == "run"){
			run();
			process_used += 10;
			mem_used += 67;
			continue;
		}else if(message == "command"){
			command();
			process_used += 10;
			mem_used += 67;
			continue;
		}else{
			cout << "\nNot decleared in the system!\n\n";
			process_used += 20;
			mem_used += 70;
			continue;
		}
	}
}

int sysmain(){
	while(1){
		if(coremgr()){
			if(refind){
				refindm();
				continue;
			}else if(refind == 0 && sayre == 1){
				cout << "Refind mode is not opened!\nPlease concact your admin!\n\n";
			}
			login();
			if(manager() == 2){
				return 0;
			}
		}else{
			return 0;
		}
	}
	return 0;
}

//Maining codes [Controls,Used,Includeds]

int main(){
	sysmain();
	return 0;
}
