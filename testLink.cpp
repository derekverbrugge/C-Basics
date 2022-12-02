/*  testLink.cpp
 */

#include <iostream>

using namespace std;

#include "link.h"


int main()
{
    LinkedList list1 ;  // Dynamic:  = new LinkedList;

      //  add some initial nodes
    list1.AddNode( 3 );
    list1.AddNode( 5 );

    cout << "Initial contents of list1:" << endl;
    list1.ListNodes();

    cout << "Is 3 in the list? ";
    if( list1.IsInList( 3 ) )
        cout << " yes" << endl;
    else
        cout << " no" << endl;

      //  add a few more nodes
    list1.AddNode( 1 );

    cout << "Contents of list1 after adding:" << endl;
    list1.ListNodes();

      //  delete a few nodes
    list1.DeleteNode( 5 );

    cout << "Contents of list1 after deleting:" << endl;
    list1.ListNodes();


    return 0;
}
