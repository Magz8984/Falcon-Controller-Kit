//Header file denotes PID Controller

void init_command_variable(int command_variable);
void errorTerm(int  control_variable);
void init();
void freeMem();
int controller(int error_term);


typedef struct Plant{
  int ac_signal;
  int controlled_variable;
  int error_term;
}Plant;

Plant *plant;
float rate;
enum speeds{HIGH,LOW};
int commandVariable=0;


void init() {
//init code
plant=(Plant*) malloc(sizeof(Plant));
rate=1000;
}

void freeMem(){
 free(plant);
}

void errorTerm(int  control_variable){
  plant->controlled_variable=control_variable;
  plant->error_term=(commandVariable-control_variable);
}

void init_command_variable(int command_variable){
  commandVariable=command_variable;
}


//Controller and Rates
int controller(int error_term){
 //delay();

 return 1;
}
