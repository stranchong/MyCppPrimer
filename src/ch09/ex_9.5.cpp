#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

vector<int>::iterator find_num(vector<int>::iterator iter1, vector<int>::iterator iter2, int num) {
    for (; iter1 != iter2; iter1++) {
        if (*iter1 == num) {
            break;
        }
    }

    return iter1;
}

int main(int argc, char* argv[]) {
    srand((unsigned)time(NULL));

    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(rand() % 20);
        fprintf(stdout, "%d ", v[i]);
    }
    fprintf(stdout, "\n");

    int range;
    int num;
    fprintf(stdout, "Please input the iterator range(max=10):");
    scanf("%d", &range);
    fprintf(stdout, "Please input the number:");
    scanf("%d", &num);
    
    if (find_num(v.begin(), v.begin() + range, num) != (v.begin() + range)) {
	fprintf(stdout, "Found.\n");
    } else {
	fprintf(stdout, "Not found.\n");
    }

    return 0;
}
