# Database-_using_-c
In this repositry I will be coding up a database from scratch using C. This database will be modeled around sqlite. The structure of a database in sqlite is of the form:

![arch1](https://github.com/user-attachments/assets/c550618d-e1f4-40ae-bd3c-97a64f8a5fc3)

The front-end consists of the:
Token
Parser
Code generator
The output of Sqlite is a virtual machine bytecode. Backend consists of :
Virtual machine
Btree 
Pager
Os interface

We will start by making a simple read, execute, print loop. 
