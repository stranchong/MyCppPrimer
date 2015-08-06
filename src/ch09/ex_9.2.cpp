#include <stdio.h>
#include <list>
#include <deque>

using namespace std;

int main(int argc, char* argv[]) {
    list<deque<int> > list1;
    for (int i = 0; i < 3; i++) {
        deque<int> tmp_deque;
        for (int j = 0; j < 5; j++) {
            tmp_deque.push_back(j);
        } 
        list1.push_back(tmp_deque);
    }

    for (list<deque<int> >::iterator iter1 = list1.begin(); iter1 != list1.end(); iter1++) {
        deque<int> tmp_deque = *iter1;
        for (deque<int>::iterator iter2 = tmp_deque.begin(); iter2 != tmp_deque.end(); iter2++) {
            fprintf(stdout, " %d", *iter2);
        } 
        fprintf(stdout, "\n");
    }

    return 0;
}
