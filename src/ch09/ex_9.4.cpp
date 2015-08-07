#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
    srand((unsigned)time(NULL));
    vector<int> v;
    
    for (int i = 0; i < 10; i++) {
        v.push_back(rand() % 20);
    }

    int num;
    fprintf(stdout, "Please input the number:");
    scanf("%d", &num);

    bool is_find = false;
    for (vector<int>::iterator iter1 = v.begin(), iter2 = iter1 + 5; iter1 != iter2; iter1++) {
        if (*iter1 == num) {
            is_find = true;
            break;
        }
    }
    
    if (is_find) {
	fprintf(stdout, "Found.\n");
    } else {
	fprintf(stdout, "Not found.\n");
    }

    return 0;
}
