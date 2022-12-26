#include <iostream>
#include <string>


void draw(std::string pos) 
{
	for(char cpos : pos)
	{
		cpos = tolower(cpos);
		switch(cpos)
		{
			case 'r':
					std::cout<<" r";
					break;
			case 'n':
					std::cout<<" n";
				       	break;
			case 'b':
					std::cout<<" b";
				       	break;
			case 'q':
					std::cout<<" q";
				       	break;
			case 'k':
					std::cout<<" k";
				       	break;
			case 'p':
					std::cout<<" p";
					break;
			case '/':
					std::cout<<"\n";
					break;
		}
		if(isdigit(cpos))
		{
			int x = cpos - '0';
			//std::cout<<x;
			for(int i = 0; i < x; i++)
				std::cout<<" .";
		}
	}
	std::cout<<"\n";
}

int main()
{
	std::string pos = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR";
	//std::string pos = "r3b/8/8/8/8/8/8/8/8";
	draw(pos);
	return 0;
}
