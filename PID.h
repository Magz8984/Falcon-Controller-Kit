//Header file denotes PID Controller


typedef struct Plant{
  int ac_signal;
  int controlled_variable;
}

enum speeds{HIGH,LOW};

int commandVariable=0;

int errorTerm(int  control_variable){
  return commandVariable - control_variable;
}
