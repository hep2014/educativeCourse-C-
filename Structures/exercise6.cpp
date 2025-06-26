/*
 * Exercise 6: Static Members - Counting Objects.
 * Create an Item structure with an id (int) field and a static count (int) field,
 * initialized with zero. Define a constructor that increments count when
 * creating a new object and assigns id = count . Define a destructor that
 * reduces count (optional, but possible to track the deletion of objects). In
 * the main function, create several Item objects (as local variables, or
 * dynamically with new), print the value Item::count after each
 * creation or deletion operation. Check how the counter changes.
 */

/*
 * Доп. материал (вопрос) в faq.md в этой же папке.
 */

#include <iostream>

using namespace std;

struct Item{
    int id;
    static int count;

    Item(){
        count++;
        id = count;
    }

    ~Item(){
        count--;
    }
};

int Item::count = 0;

int main(){
    Item* it1 = new Item();
    cout << it1->count << endl;
    Item* it2 = new Item();
    cout << it2->count << endl;
    Item* it3 = new Item();
    cout << it3->count << endl;
    delete it1;
    cout << it3->count << endl;
}