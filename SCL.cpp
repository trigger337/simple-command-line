#include<stdio.h>
#include<windows.h>
#include<iostream>
#include<string>

using namespace std;

float version = 1.0;
string cmds[] = {"y", "n", "help", "exit", "cl"};

void init()
{
	cout << "simple command line version " << version << endl << "use 'help' to list all available commands" << endl;
}

void help()
{
	cout << "available commands" << endl;
	for(int i = 2; i < 5; i++)
		cout << cmds[i] << endl;
}

int main()
{	
	init();
	
	string inp;
	
	while(1)
	{
		cout << "TCL > ";
		getline(cin, inp);
		
		if(inp == cmds[2])
			help();
		if(inp == cmds[3])
		{
			cout << "are you sure(y/n): ";
			cin >> inp;
			if(inp == cmds[0])
				exit(0);
		}
		if(inp == cmds[4])
			system("cls");
		
	}
}
