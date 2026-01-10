#include "libft.h"
//#include "unistd.h"

int ft_isalpha(int inputVal){
    if (inputVal >= 'A' && inputVal < 'Z')
    {
        return (1);
    }
    if(inputVal >= 'a' &&  inputVal <= 'z'){
        return (1);
    }

    return (0);
}

/*
int main(){
    char a = 'A';
    int result = ft_isalpha(a);

    int test = result  + 48;

    write(1, &test, 1);

    return 1;
}
*/