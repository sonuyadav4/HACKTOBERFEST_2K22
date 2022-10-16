#include<stdio.h>
int main(){
	char ch[2];
	int flag = 0;
	printf("Enter string: ");
	scanf("%s",ch);
	
	switch(ch[0]){
		case '+':if(ch[1]=='\0'){
					printf("Arithmetic operator (Addititon)-> +");
					flag = 1;
				}
				else if(ch[1]=='+'){
					printf("Increment operator -> ++");
					flag = 1;
				}
				else if(ch[1]=='='){
					printf("Assignment operator -> +=");	
					flag = 1;
				}
				break;
		case '-':if(ch[1]=='\0'){
					printf("Arithmetic operator (Subtraction)-> -");
					flag = 1;
				}
				else if(ch[1]=='-'){
					printf("Decrement operator -> --");
					flag = 1;
				}
				else if(ch[1]=='='){
					printf("Assignment operator -> -=");	
					flag = 1;
				}
				
				break;
		case '*':if(ch[1]=='\0'){
					printf("Arithmetic operator (Multiplication)-> * ");
					flag=1;
				}
				else if(ch[1]=='='){
					printf("Assignment operator -> *=");	
					flag = 1;
				}
				break;
		case '/':if(ch[1]=='\0'){
					printf("Arithmetic operator (Division)-> / ");
					flag=1;
				}
				else if(ch[1]=='='){
					printf("Assignment operator -> /=");	
					flag = 1;
				}
				break;
		case '%':if(ch[1]=='\0'){
					printf("Arithmetic operator (Modulus)-> / ");
					flag=1;
				}
				else if(ch[1]=='='){
					printf("Assignment operator -> %=");	
					flag = 1;
				}
				break;
		case '=':if(ch[1]=='='){
					printf("Relational Operator -> ==");
					flag = 1;			
				}
		case '>':if(ch[1]=='\0'){
					printf("Relational operator -> >");
					flag = 1;
				}
				else if(ch[1]=='='){
					printf("Relational operator -> >=");
					flag = 1;
				}
				else if(ch[1]=='>'){
					printf("Bitwise operator -> >>");
					flag = 1;
				}
				break;
		case '<':if(ch[1]=='\0'){
					printf("Relational operator -> <");
					flag = 1;
				}
				else if(ch[1]=='='){
					printf("Relational operator -> <=");
					flag = 1;
				}
				else if(ch[1]=='<'){
					printf("Bitwise operator -> <<");
					flag = 1;
				}
				break;
		case '!':if(ch[1]=='\0'){
					printf("Logical operator -> !");
					flag = 1;
				}
				else if(ch[1]=='='){
					printf("Relational operator -> !=");
					flag = 1;
				}
				break;
		case '&':if(ch[1]=='\0'){
					printf("Bitwise operator -> &");
					flag = 1;
				}
				else if(ch[1]=='&'){
					printf("Logical operator -> &&");
					flag = 1;
				}
				break;
		case '|':if(ch[1]=='\0'){
					printf("Bitwise operator -> |");
					flag = 1;
				}
				else if(ch[1]=='|'){
					printf("Logical operator -> ||");
					flag = 1;
				}
				break;
		case '^':if(ch[1]=='\0'){
					printf("Bitwise operator -> ^");
					flag = 1;
				}
				break;
		case '~':if(ch[1]=='\0'){
					printf("Bitwise operator -> ~");
					flag = 1;
				}
				break;
		
	}
	if(flag==0)
		printf("Invalid operator");
	return 0;
}
