int int main(int argc, char const *argv[])
{
	InputBuffer* input_buffer=new_input_buffer();
	while(True){
		print_prompt();
		read_input(input_buffer);
		if(strcmp(input_buffer->buffer,".exit")==0){
			close_input_buffer(input_buffer);
			exit(EXIT_SUCCESS);

		}
		else{
			printf("Unrecognized Command  '%s'.\n",input_buffer->buffer);
		}
	}
	/* code */
	return 0;
}
