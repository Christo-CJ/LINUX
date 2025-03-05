# The chmod command

The chmod command changes file mod bits. The chmod changes the file mode bits of each given file according to mode, which can be either a symbolic representation of changes to make, or an octal number representing the bit pattern for the new mode bits.

$ chmod mode filename

Numeric mode (Octal Numbers)

The format of a numeric mode is 'ugo' i.e. user, group and others.

A numeric mode is from one to four octal digits (0-7), derived by adding up the bits with values 4, 2, and 1. Any omitted digits are assumed to be leading zeros. The first digit selects permissions for the user who owns the file: read (4), write (2), and execute (1); the second selects permissions for other users in the file's group, with the same values; and the thirs for other users not in the file's group, with the same values. For eg,

Read by owner only

$ chmod 0400 p.c

Allow read permission to owner and write permission to group and execute permission to others.

$ chmod 0421 p.c

Allow user, group and others to read, write, and execute file.

$ chmod 0777 a.out