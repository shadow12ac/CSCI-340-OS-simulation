#ifndef PCB_H
#define PCB_H

#include <string>
using std::string;

class PCB
{
	private:
		
		unsigned int pid;
		char stage;
		
	public:
		
		PCB (unsigned int id_num, char location ='q'): pid(id_num), stage(location) {}
		unsigned int get_pid();
		char get_stage();
	
};
#endif