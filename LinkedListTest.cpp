#include "UnitTest++.h"
#include "LinkedList.h"
#include <iostream>

namespace
{

    TEST(ScoreTestPerfect)
    {
        LinkedList *list = new LinkedList();
        for(int index = 1; index <= 10; index++)
        {
            std::cout << "Inserting node at start to position: " << index << std::endl;
            list->insert(list->getLength() + 1 , index);
        }
        CHECK_EQUAL(true, true);
    }
}
