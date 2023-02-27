A system traversal is a traversal defined by the CoCoNut framework.
Examples of such traversals are the *check*, *free*, and *copy* traversals.
At the moment, it takes several steps to add a system traversal to the framework.

# Adding an enum entry
There is one big enum where every traversal gets a unique ID (integer).
This enum is generated in the *dynamic_backend/gen_enum.c* file.
To include your system traversal, you need to add an entry in the
*do_enum* function inside the `if (STReq("TRAV_", prefix))` block, 
like `OUT_ENUM_FIELD("TRAV_<your traversal name>")`. The traversal
name must be unique among the system traversals. It is probably
a good idea to prefix the traversal name with *ccn*, such as
`TRAV_CCN_<traversal name>`, since *ccn* is a reserved prefix.

# Adding a vtable entry
After adding an enum, you need to add an entry to the vtable.
It is **important** that you respect the order of the enums, since the enum
is used as an index into the vtable.

The vtable entry is set in *dynamic_backend/gen_trav_table.c* in the
*DGTTast* function as follows `OUT("ccn_<traversal_name>_vtable,")`.
It is important that you follow that naming convention.

# Adding a vtable
Now that you have a vtable entry, you need an actual vtable.
A vtable maps nodes to traversal handlers for a specific traversal.
A vtable for a system traversal can be added in the
*dynamic_backend/gen_system_traversals.c* file, inside the
*DGSTast* function. There, you should add a 
call to the *GenSystemTraversalVtable* function for your traversal.
Order shouldn't matter here. This function generates a vtable for you, 
with a handler for all the nodes. See the function documentation for
more information.

# Generating the system traversal
To generate the actual system traversal, you should add a new traversal 
and implement it. You can look at the existing system traversals for
inspiration. It is *important* that you generate handlers for all nodes and that your handlers (Trav functions) follow
the format as generated by the *GenSystemTraversalVtable*. See [CoCoNut traversal documentation](https://coconut-uva.github.io/coconut/codegen.html#traversals) for more information regarding the naming and structure of the handlers.
