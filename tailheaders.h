void open(FILE **file , char* filename);

int arg_to_number(char* argument);

void tail_cmd(FILE *file, int nbr_of_line , char *str_line , int n );

int count_line(FILE* file ,char* str , int n );

void syntax_error(int argc ,char * argv);

void display(char *arg);

void tail_cmd_f(FILE *file, int nbr_of_line , char *str_line , int n );

void tail_cmd_c(FILE *file, int nbr_of_line , char *str_line , int n );
