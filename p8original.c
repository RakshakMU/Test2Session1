Breakpoint 1, main () at p7original.c:35
35  {
(gdb) n
37      l=input_line();
(gdb) s
input_line () at p7original.c:23
23          l.p1=input_point();
(gdb) n
Enter the co-ordinates of the points
4
5
24          l.p2=input_point();
(gdb) n
Enter the co-ordinates of the points
4
6
25          return l;
(gdb) n
26  }
(gdb) n
main () at p7original.c:38
38      find_lenght(&l);
(gdb) n
39      output(&l);
(gdb) n
40      return 0;
(gdb) n
41  }(gdb) 