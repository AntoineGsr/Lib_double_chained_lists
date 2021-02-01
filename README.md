# LibDoubleChainedLists
This is my own lib of double chained lists in C.
With this lib you can create your double chained lists.
You just have to clone my Repository and work in the root of this clone.
Add your .c in the Makefile and #include the .h inside your .c.

Now, you can call and use the functions of my lib. To create the list you have to :
1st step -> make ; make clean ==> the lib/ and the name is "libmy_doublechainedlists.a" (you can change it) ;
2nd step -> init the "global" and create this one with the function "create_global_list". "global" must have to pointe on the first and last nodes of the list ;
3rd step -> init the "node";
4th step -> create a loop for ==> for (...; condition(s);...) {
                                     "node" = add_to_list(...); ==> create a new node at the end of the list at each step of the loop
                                  }
                                  "node" = "global list" first;  ==> list is created, now, you must have to make pointe your "node" on the first node
5th step -> code your program. Don't forget to come back to the first node when you move your "node" inside the list ;
6th step -> display the list for debug ;
7th step -> free "global" and "node" with the destroy function.
You can destroy a node with del_to_list(...). You must have to give the position of the node you want to delete.

PS: I give you an exemple of code, you just have to execute "./my_lib 1 2 3 4 5 6 etc."
Good luck.
