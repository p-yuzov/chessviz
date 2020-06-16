#define CTEST_MAIN
#include <../thirdparty/ctest.h>
#include <../src/board.h>
int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}
CTEST(board_suit, checkInput_len11_return0){
    char *input = {'e','2','-','e','4',' ','e','7','-','e','6'};
    int result = checkInput(input);
    ASSERT_EQUAL(0,result);
}
CTEST(board_suit, checkInput_NULL_return_minus1){
    char *input = NULL;
    int result = checkInput(input);
    ASSERT_EQUAL(-1,result);
}